/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  ROUTE Plugin
 * Author:   SaltyPaws
 *
 ***************************************************************************
 *   Copyright (C) 2012 by Brazil BrokeTail                                *
 *   $EMAIL$                                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */
#define DATABASE_NAME "survey.sqlite"

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <wx/stdpaths.h>
#include "sar_pi.h"

// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new sar_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}

void appendOSDirSlash(wxString* pString)
{
      wxChar sep = wxFileName::GetPathSeparator();
      if (pString->Last() != sep)
            pString->Append(sep);
}

//---------------------------------------------------------------------------------------------------------
//
//    Survey PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------

#include "icons.h"

//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------

sar_pi::sar_pi(void *ppimgr)
      :opencpn_plugin_18(ppimgr)
{
      // Create the PlugIn icons
      initialize_images();
}

void sar_pi::ImportHydromagicTrack(TiXmlElement *track)
{

}

void sar_pi::ExportHydromagic(int survey_id, wxString filename)
{
}


bool sar_pi::ImportHydromagic(wxString filename)
{
      return true;
}

bool sar_pi::dbQuery(wxString sql)
{/*
 */     return true;
}

void sar_pi::dbGetTable(wxString sql, char ***results, int &n_rows, int &n_columns)
{
}

int sar_pi::dbGetIntNotNullValue(wxString sql)
{
            return 0;
}

wxString sar_pi::GetSurveyName(int survey_id)
{
}

int sar_pi::GetSurveyId(wxString survey_name)
{
     // return dbGetIntNotNullValue(wxString::Format(_T("SELECT survey_id FROM survey WHERE survey_name='%s'"), survey_name.c_str()));
     return 0;
}

void sar_pi::dbFreeResults(char **results)
{/*
      sqlite3_free_table (results);*/
}

int sar_pi::CreateSurvey(wxString name)
{/*
      wxString sql = wxString::Format(_T("INSERT INTO survey (survey_name, created, submitted) VALUES ('%s', current_timestamp, 0)"), name.c_str());
      dbQuery(sql);
      return sqlite3_last_insert_rowid(m_database);
      */
      return 0;
}

void sar_pi::DeleteSurvey(int id)
{
}

int sar_pi::InsertSounding(double depth, double lat, double lon, double tide, time_t timestamp, int projection)
{

      return 0;
}

int sar_pi::Init(void)
{
      m_projection = PROJECTION;
      m_activesurvey = 0;
      int db_ver = 1;
      mPriPosition = 99;
      mPriDepth = 99;
      m_lat = 999.0;
      m_lon = 999.0;
      mLastX = -1;
      mLastY = -1;
      mLastSdgId = -1;
      mLastSurveyId = -1;
      m_lastPosReport = wxDateTime::Now();
      AddLocaleCatalog( _T("opencpn-sar_pi") );
      //spatialite_init(0);
      //err_msg = NULL;
      wxString sql;

      // Set some default private member parameters
      m_survey_dialog_x = 0;
      m_survey_dialog_y = 0;

      ::wxDisplaySize(&m_display_width, &m_display_height);

      //    Get a pointer to the opencpn display canvas, to use as a parent for the POI Manager dialog
      m_parent_window = GetOCPNCanvasWindow();

      //    Get a pointer to the opencpn configuration object
      m_pconfig = GetOCPNConfigObject();

      //    And load the configuration items
      LoadConfig();

      //      Establish the location of the config file
      wxString dbpath;

//      Establish a "home" location
      wxStandardPathsBase& std_path = wxStandardPaths::Get();

      wxString pHome_Locn;
#ifdef __WXMSW__
      pHome_Locn.Append(std_path.GetConfigDir());          // on w98, produces "/windows/Application Data"
#else
      pHome_Locn.Append(std_path.GetUserConfigDir());
#endif
      appendOSDirSlash(&pHome_Locn) ;
#ifdef __WXMSW__
      dbpath = _T(DATABASE_NAME);
      dbpath.Prepend(pHome_Locn);

#elif defined __WXOSX__
      dbpath = std_path.GetUserConfigDir(); // should be ~/Library/Preferences
      appendOSDirSlash(&dbpath) ;
      dbpath.Append(_T(DATABASE_NAME));
#else
      dbpath = std_path.GetUserDataDir(); // should be ~/.opencpn
      appendOSDirSlash(&dbpath) ;
      dbpath.Append(_T(DATABASE_NAME));
#endif



      //    This PlugIn needs a toolbar icon, so request its insertion
      m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_rescue, _img_rescue, wxITEM_NORMAL,
            _("SAR"), _T(""), NULL,
             SURVEY_TOOL_POSITION, 0, this);

      m_pDialog = NULL;

      return (WANTS_TOOLBAR_CALLBACK    |
              INSTALLS_TOOLBAR_TOOL     |
              WANTS_PREFERENCES         |
              //WANTS_NMEA_SENTENCES      |
              //WANTS_NMEA_EVENTS         |
              WANTS_OVERLAY_CALLBACK    |
              WANTS_ONPAINT_VIEWPORT    |
              //WANTS_OPENGL_OVERLAY_CALLBACK |
              //WANTS_DYNAMIC_OPENGL_OVERLAY_CALLBACK |
              WANTS_CONFIG
           );
}

bool sar_pi::DeInit(void)
{
      //    Record the dialog position
      if (NULL != m_pDialog)
      {
            wxPoint p = m_pDialog->GetPosition();
            SetSurveyDialogX(p.x);
            SetSurveyDialogY(p.y);

            m_pDialog->Close();
            delete m_pDialog;
            m_pDialog = NULL;
      }
      SaveConfig();
      //sqlite3_close (m_database);
      //spatialite_cleanup();
      return true;
}

int sar_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int sar_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int sar_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int sar_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxBitmap *sar_pi::GetPlugInBitmap()
{
      return _img_rescue;
}

wxString sar_pi::GetCommonName()
{
      return _("SAR");
}


wxString sar_pi::GetShortDescription()
{
      return _("Search and Resque Patterns");
}

wxString sar_pi::GetLongDescription()
{
      return _("Creates GPX files with\n\
Search and resque patterns.");
}


int sar_pi::GetToolbarToolCount(void)
{
      return 1;
}

void sar_pi::SetColorScheme(PI_ColorScheme cs)
{
      if (NULL == m_pDialog)
            return;

      DimeWindow(m_pDialog);
}

void sar_pi::FillSurveyDropdown()
{
     // m_pDialog->m_chSurvey->Clear();
     // m_pDialog->m_chSurvey->Append(GetSurveyList());
     /* for(int i = 0; i < GetSurveyList().Count(); i++)
            if (GetSurveyList()[i] == m_activesurveyname)
                  m_pDialog->m_chSurvey->SetSelection(i);*/
}

void sar_pi::OnToolbarToolCallback(int id)
{
      if(NULL == m_pDialog)
      {
            m_pDialog = new Dlg(m_parent_window);
            m_pDialog->plugin = this;
            m_pDialog->Move(wxPoint(m_survey_dialog_x, m_survey_dialog_y));
            FillSurveyDropdown();
      }

      m_pDialog->Show(!m_pDialog->IsShown());
}

bool sar_pi::LoadConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath ( _T( "/Settings/Survey" ) );

            pConf->Read ( _T ( "Opacity" ),  &m_iOpacity, 255 );
            pConf->Read ( _T ( "Units" ),  &m_iUnits, METERS );
            pConf->Read ( _T ( "RenderOverlay" ), &m_bRenderOverlay, true );
            pConf->Read ( _T ( "RenderAll" ), &m_bRenderAllSurveys, true );
            pConf->Read ( _T ( "ConnectSoundings" ), &m_bConnectSoundings, true );
            pConf->Read ( _T ( "SoundingColor" ), &m_sSoundingColor );
            pConf->Read ( _T ( "ConnectorColor" ), &m_sConnectorColor );
            pConf->Read ( _T ( "SoundingFont" ), &m_sFont );
            pConf->Read ( _T ( "SoundingFontColor" ), &m_sFontColor );
            pConf->Read ( _T ( "ActiveSurvey" ), &m_activesurvey, 0 );

            pConf->Read ( _T ( "LOA" ), &m_fLOA, 0.0 );
            pConf->Read ( _T ( "Beam" ), &m_fBeam, 0.0 );
            pConf->Read ( _T ( "SounderBow" ), &m_fSounderBow, 0.0 );
            pConf->Read ( _T ( "WaterlineOffset" ), &m_fWaterlineOffset, 0.0 );
            pConf->Read ( _T ( "GPSBow" ), &m_fGPSBow, 0.0 );
            pConf->Read ( _T ( "GPSPort" ), &m_fGPSPort, 0.0 );
            pConf->Read ( _T ( "MinSoundingDist" ), &m_fMinDistance, 0.0 );
            pConf->Read ( _T ( "AutoNewDistance" ), &m_fAutoNewDistance, 0.0 );

            m_survey_dialog_x =  pConf->Read ( _T ( "DialogPosX" ), 20L );
            m_survey_dialog_y =  pConf->Read ( _T ( "DialogPosY" ), 20L );

            if((m_survey_dialog_x < 0) || (m_survey_dialog_x > m_display_width))
                  m_survey_dialog_x = 5;
            if((m_survey_dialog_y < 0) || (m_survey_dialog_y > m_display_height))
                  m_survey_dialog_y = 5;
            return true;
      }
      else
            return false;
}


bool sar_pi::SaveConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath ( _T ( "/Settings/Survey" ) );
            pConf->Write ( _T ( "Opacity" ), m_iOpacity );
            pConf->Write ( _T ( "Units" ), m_iUnits );
            pConf->Write ( _T ( "RenderOverlay" ), m_bRenderOverlay );
            pConf->Write ( _T ( "RenderAll" ), m_bRenderAllSurveys );
            pConf->Write ( _T ( "ConnectSoundings" ), m_bConnectSoundings );
            pConf->Write ( _T ( "SoundingColor" ), m_sSoundingColor );
            pConf->Write ( _T ( "ConnectorColor" ), m_sConnectorColor );
            pConf->Write ( _T ( "SoundingFont" ), m_sFont );
            pConf->Write ( _T ( "SoundingFontColor" ), m_sFontColor );
            pConf->Write ( _T ( "ActiveSurvey" ), m_activesurvey );

            pConf->Write ( _T ( "LOA" ), m_fLOA );
            pConf->Write ( _T ( "Beam" ), m_fBeam );
            pConf->Write ( _T ( "SounderBow" ), m_fSounderBow );
            pConf->Write ( _T ( "WaterlineOffset" ), m_fWaterlineOffset );
            pConf->Write ( _T ( "GPSBow" ), m_fGPSBow );
            pConf->Write ( _T ( "GPSPort" ), m_fGPSPort );
            pConf->Write ( _T ( "MinSoundingDist" ), m_fMinDistance );
            pConf->Write ( _T ( "AutoNewDistance" ), m_fAutoNewDistance );


            pConf->Write ( _T ( "DialogPosX" ),   m_survey_dialog_x );
            pConf->Write ( _T ( "DialogPosY" ),   m_survey_dialog_y );

            return true;
      }
      else
            return false;
}

void sar_pi::ShowPreferencesDialog( wxWindow* parent )
{
      CfgDlg *dialog = new CfgDlg( parent, wxID_ANY, _("SAR Preferences"), wxPoint( m_survey_dialog_x, m_survey_dialog_y), wxDefaultSize, wxDEFAULT_DIALOG_STYLE );
      dialog->Fit();
      wxColour cl;
      DimeWindow(dialog);
      dialog->m_cbRenderOverlay->SetValue(m_bRenderOverlay);
      dialog->m_sOpacity->SetValue(m_iOpacity);
      switch(m_iUnits)
      {
      case METERS:
            dialog->m_rbMeters->SetValue(true);
            break;
      case FEET:
            dialog->m_rbFeet->SetValue(true);
            break;
      case FATHOMS:
            dialog->m_rbFathoms->SetValue(true);
            break;
      }
      dialog->m_rbRendedAllSurveys->SetValue(m_bRenderAllSurveys);
      dialog->m_rbRenderActiveSurvey->SetValue(!m_bRenderAllSurveys);
      dialog->m_cbConnectSoundings->SetValue(m_bConnectSoundings);
      dialog->m_cpSoundingColor->SetColour(m_sSoundingColor);
      dialog->m_cpConnectorColor->SetColour(m_sConnectorColor);
      dialog->m_fpFont->SetSelectedFont(wxFont(m_sFont));
      dialog->m_cpFontColor->SetColour(m_sFontColor);
      dialog->m_tLOA->SetValue(wxString::Format(wxT("%f"), m_fLOA));
      dialog->m_tBeam->SetValue(wxString::Format(wxT("%f"), m_fBeam));
      dialog->m_tSounderBow->SetValue(wxString::Format(wxT("%f"), m_fSounderBow));
      dialog->m_tWaterlineOffset->SetValue(wxString::Format(wxT("%f"), m_fWaterlineOffset));
      dialog->m_tGPSBow->SetValue(wxString::Format(wxT("%f"), m_fGPSBow));
      dialog->m_tGPSPort->SetValue(wxString::Format(wxT("%f"), m_fGPSPort));
      dialog->m_tMinDistance->SetValue(wxString::Format(wxT("%f"), m_fMinDistance));
      dialog->m_tAutoNewDistance->SetValue(wxString::Format(wxT("%f"), m_fAutoNewDistance));

      if(dialog->ShowModal() == wxID_OK)
      {
            m_bRenderOverlay = dialog->m_cbRenderOverlay->GetValue();
            m_iOpacity = dialog->m_sOpacity->GetValue();
            if (dialog->m_rbMeters->GetValue())
                  m_iUnits = METERS;
            else if (dialog->m_rbFeet->GetValue())
                  m_iUnits = FEET;
            else
                  m_iUnits = FATHOMS;
            m_bRenderAllSurveys = dialog->m_rbRendedAllSurveys->GetValue();
            m_bConnectSoundings = dialog->m_cbConnectSoundings->GetValue();
            m_sSoundingColor = dialog->m_cpSoundingColor->GetColour().GetAsString();
            m_sConnectorColor = dialog->m_cpConnectorColor->GetColour().GetAsString();
            m_sFont = dialog->m_fpFont->GetSelectedFont().GetNativeFontInfoDesc();
            m_sFontColor = dialog->m_cpFontColor->GetColour().GetAsString();
            double value;
            if(!dialog->m_tLOA->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fLOA = value;
            if(!dialog->m_tBeam->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fBeam = value;
            if(!dialog->m_tSounderBow->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fSounderBow = value;
            if(!dialog->m_tWaterlineOffset->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fWaterlineOffset = value;
            if(!dialog->m_tGPSBow->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fGPSBow = value;
            if(!dialog->m_tGPSPort->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fGPSPort = value;
            if(!dialog->m_tMinDistance->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fMinDistance = value;
            if(!dialog->m_tAutoNewDistance->GetValue().ToDouble(&value)){ value = 0.0; }
            m_fAutoNewDistance = value;

            SaveConfig();
      }
      delete dialog;
}

void sar_pi::DrawSounding(wxDC &dc, int x, int y, double depth, long sounding_id, long survey_id)
{
}

bool sar_pi::RenderOverlay(wxDC &dc, PlugIn_ViewPort *vp)
{

      return true;
}



// Is the given point in the vp ??
bool PointInLLBox(PlugIn_ViewPort *vp, double x, double y)
{


    if (  x >= (vp->lon_min) && x <= (vp->lon_max) &&
            y >= (vp->lat_min) && y <= (vp->lat_max) )
            return TRUE;
    return FALSE;
}

void sar_pi::StoreSounding(double depth)
{

}


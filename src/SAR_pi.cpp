/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  SAR Plugin
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

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include "SAR_pi.h"

// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new SAR_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}

//---------------------------------------------------------------------------------------------------------
//
//    Calculator PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------

#include "icons.h"

//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------

SAR_pi::SAR_pi(void *ppimgr)
      :opencpn_plugin_116(ppimgr)
{
      // Create the PlugIn icons
      initialize_images();

	  wxString shareLocn = *GetpSharedDataLocation() +
		  "plugins" + wxFileName::GetPathSeparator() +
		  "sar_pi" + wxFileName::GetPathSeparator()
		  + "data" + wxFileName::GetPathSeparator();
	  wxImage panelIcon(shareLocn + "sar_panel_icon.png");
	  if (panelIcon.IsOk())
		  m_panelBitmap = wxBitmap(panelIcon);
	  else
/*
	  wxFileName fn;
	  wxString tmp_path;

	  tmp_path = GetPluginDataDir("sar_pi");
	  fn.SetPath(tmp_path);
	  fn.AppendDir(_T("data"));


	  wxString shareLocn = fn.GetFullPath();
	  wxImage panelIcon(shareLocn +  wxFileName::GetPathSeparator() + "sar_panel_icon.png");

	  if (panelIcon.IsOk())
		  m_panelBitmap = wxBitmap(panelIcon);

*/
	 
		  wxLogMessage(_("    SAR panel icon has NOT been loaded"));

	  m_bShowSAR = false;
}

int SAR_pi::Init(void)
{
	AddLocaleCatalog(_T("opencpn-sar_pi"));
	 // AddLocaleCatalog( PLUGIN_CATALOG_NAME); // for integration

      // Set some default private member parameters
      m_route_dialog_x = 0;
      m_route_dialog_y = 0;
      ::wxDisplaySize(&m_display_width, &m_display_height);

      //    Get a pointer to the opencpn display canvas, to use as a parent for the POI Manager dialog
      m_parent_window = GetOCPNCanvasWindow();

      //    Get a pointer to the opencpn configuration object
      m_pconfig = GetOCPNConfigObject();

      //    And load the configuration items
      LoadConfig();

      //    This PlugIn needs a toolbar icon, so request its insertion
#ifdef PLUGIN_USE_SVG
	  m_leftclick_tool_id = InsertPlugInToolSVG("SAR", _svg_sar, _svg_sar, _svg_sar_toggled,
		  wxITEM_CHECK, _("SAR"), "", NULL, CALCULATOR_TOOL_POSITION, 0, this);
#else
      m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_rescue, _img_rescue, wxITEM_NORMAL,
            _("SAR"), _T(""), NULL,
             CALCULATOR_TOOL_POSITION, 0, this);
#endif

	  

	  wxMenu dummy_menu;
	  m_position_menu_id = AddCanvasContextMenuItem

	  (new wxMenuItem(&dummy_menu, -1, _("Select SAR Datum Point")), this);
	  SetCanvasContextMenuItemViz(m_position_menu_id, false);

      m_pDialog = NULL;

      return (WANTS_CURSOR_LATLON      |
              WANTS_TOOLBAR_CALLBACK    |
              INSTALLS_TOOLBAR_TOOL     |
              WANTS_NMEA_EVENTS         |
              WANTS_PREFERENCES         |
              WANTS_CONFIG
           );
}

bool SAR_pi::DeInit(void)
{
      //    Record the dialog position
      if (NULL != m_pDialog)
      {
		  

		  //Capture dialog position
            wxPoint p = m_pDialog->GetPosition();
            SetCalculatorDialogX(p.x);
            SetCalculatorDialogY(p.y);
            m_pDialog->Close();
            delete m_pDialog;
            m_pDialog = NULL;

			m_bShowSAR = false;
			SetToolbarItemState(m_leftclick_tool_id, m_bShowSAR);
      }
      SaveConfig();
      return true;
}

int SAR_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int SAR_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int SAR_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int SAR_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxString SAR_pi::GetCommonName()
{
	//return _T(PLUGIN_COMMON_NAME); // for integration
	return _("SAR");
}

wxBitmap *SAR_pi::GetPlugInBitmap()
{
	return &m_panelBitmap;
}


wxString SAR_pi::GetShortDescription()
{
      return _("Search and Rescue Patterns");
}

wxString SAR_pi::GetLongDescription()
{
      return _("Creates GPX files with Search and Rescue patterns");
}

int SAR_pi::GetToolbarToolCount(void)
{
      return 1;
}

void SAR_pi::SetColorScheme(PI_ColorScheme cs)
{
      if (NULL == m_pDialog)
            return;

      DimeWindow(m_pDialog);
}

void SAR_pi::OnToolbarToolCallback(int id)
{
      if(NULL == m_pDialog)
      {
            m_pDialog = new Dlg(m_parent_window);
            m_pDialog->plugin = this;
            m_pDialog->Move(wxPoint(m_route_dialog_x, m_route_dialog_y));
      }
	  m_pDialog->Fit();

	  //Toggle 
	  m_bShowSAR = !m_bShowSAR;

	  //    Toggle dialog? 
	  if (m_bShowSAR) {
		  m_pDialog->Show();
		  SetCanvasContextMenuItemViz(m_position_menu_id, true);
	  }
	  else {
		  m_pDialog->Hide();
		  SetCanvasContextMenuItemViz(m_position_menu_id, false);
	  }	 

	  // Toggle is handled by the toolbar but we must keep plugin manager b_toggle updated
	  // to actual status to ensure correct status upon toolbar rebuild
	  SetToolbarItemState(m_leftclick_tool_id, m_bShowSAR);

	  RequestRefresh(m_parent_window); // refresh main window

}

bool SAR_pi::LoadConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath ( _T( "/Settings/SAR_pi" ) );
            pConf->Read ( _T ( "Opacity" ),  &m_iOpacity, 255 );
           // pConf->Read       dialog->m_cpConnectorColor->SetColour(m_sConnectorColor);
            m_route_dialog_x =  pConf->Read ( _T ( "DialogPosX" ), 20L );
            m_route_dialog_y =  pConf->Read ( _T ( "DialogPosY" ), 20L );
            m_bCaptureCursor =  pConf->Read ( _T ( "CaptureCursor" ), true );
            m_bCaptureShip =  pConf->Read ( _T ( "CaptureShip" ), true );

            if((m_route_dialog_x < 0) || (m_route_dialog_x > m_display_width))
                  m_route_dialog_x = 5;
            if((m_route_dialog_y < 0) || (m_route_dialog_y > m_display_height))
                  m_route_dialog_y = 5;
            return true;
      }
      else
            return false;
}

bool SAR_pi::SaveConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath ( _T ( "/Settings/SAR_pi" ) );
            pConf->Write ( _T ( "Opacity" ), m_iOpacity );
            pConf->Write ( _T ( "DialogPosX" ),   m_route_dialog_x );
            pConf->Write ( _T ( "DialogPosY" ),   m_route_dialog_y );
            pConf->Write ( _T ( "CaptureCursor" ), m_bCaptureCursor );
            pConf->Write ( _T ( "CaptureShip" ),  m_bCaptureShip );
            return true;
      }
      else
            return false;
}

void SAR_pi::ShowPreferencesDialog( wxWindow* parent )
{
      CfgDlg *dialog = new CfgDlg( parent, wxID_ANY, _("Route Preferences"), wxPoint( m_route_dialog_x, m_route_dialog_y), wxDefaultSize, wxDEFAULT_DIALOG_STYLE );
      dialog->Fit();
      wxColour cl;
      DimeWindow(dialog);
      dialog->m_sOpacity->SetValue(m_iOpacity);
      dialog->m_CaptureCursor->SetValue(m_bCaptureCursor);
      dialog->m_CaptureShip->SetValue(m_bCaptureShip);

      if(dialog->ShowModal() == wxID_OK)
      {
            m_iOpacity = dialog->m_sOpacity->GetValue();
            m_bCaptureCursor = dialog->m_CaptureCursor->GetValue();
            m_bCaptureShip = dialog->m_CaptureCursor->GetValue();
            SaveConfig();
      }
      delete dialog;
}

void SAR_pi::SetCursorLatLon(double lat, double lon)
{
    //if (m_bCaptureShip){ //Option to save CPU
        m_cursor_lat=lat;
        m_cursor_lon=lon;
    //}
    //std::cout<<"Cursor--> Lat: "<<m_cursor_lat<<" Lon: "<<m_cursor_lon<<std::endl;
}

void SAR_pi::SetPositionFix(PlugIn_Position_Fix &pfix)
{
    //if (m_bCaptureCursor){ //Option to save CPU
        m_ship_lon = pfix.Lon;
        m_ship_lat = pfix.Lat;
        //std::cout<<"Ship--> Lat: "<<m_ship_lat<<" Lon: "<<m_ship_lon<<std::endl;
    //}
}

void SAR_pi::OnContextMenuItemCallback(int id)
{
	if (!m_pDialog)
		return;

	if (id == m_position_menu_id) {
		m_cursor_lat = GetCursorLat();
		m_cursor_lon = GetCursorLon();
		m_pDialog->getDatum(m_cursor_lat, m_cursor_lon);
	}
}

void SAR_pi::OnSARDialogClose() {

	m_bShowSAR = false;
	SetToolbarItemState(m_leftclick_tool_id, m_bShowSAR);
	m_pDialog->Hide();
	SaveConfig();

	SetCanvasContextMenuItemViz(m_position_menu_id, false);

	RequestRefresh(m_parent_window); // refresh main window

}

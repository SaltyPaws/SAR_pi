///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 11 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __SARGUI_H__
#define __SARGUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/notebook.h>
#include <wx/statbox.h>
#include <wx/dialog.h>
#include <wx/slider.h>
#include <wx/radiobut.h>
#include <wx/checkbox.h>
#include <wx/clrpicker.h>
#include <wx/fontpicker.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class DlgDef
///////////////////////////////////////////////////////////////////////////////
class DlgDef : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxPanel* m_dx_PS;
		wxStaticText* m_staticText1511;
		wxStaticText* m_staticText3221;
		wxTextCtrl* m_Approach_PS;
		wxStaticText* m_staticText3321;
		wxStaticText* m_staticText32112;
		wxTextCtrl* m_textCtrl25112;
		wxStaticText* m_staticText33112;
		wxStaticText* m_staticText321111;
		wxTextCtrl* m_dy_PS;
		wxStaticText* m_staticText331111;
		wxStaticText* m_staticText3211111;
		wxTextCtrl* m_n_PS;
		wxStaticText* m_staticText3311111;
		wxStaticText* m_staticText32111112;
		wxTextCtrl* m_Speed_PS;
		wxStaticText* m_staticText33111111;
		wxStaticText* m_staticText32111111;
		wxChoice* m_Nships;
		wxButton* m_button311;
		wxButton* m_button3111;
		wxStaticBitmap* m_bitmap21;
		wxPanel* m_panel2;
		wxPanel* m_panel7;
		wxStaticText* m_staticText151;
		wxStaticText* m_staticText322;
		wxTextCtrl* m_Approach_ES;
		wxStaticText* m_staticText332;
		wxStaticText* m_staticText3211;
		wxTextCtrl* m_dx_ES;
		wxStaticText* m_staticText3311;
		wxStaticText* m_staticText32111;
		wxTextCtrl* m_n_ES;
		wxStaticText* m_staticText33111;
		wxStaticText* m_staticText321111121;
		wxTextCtrl* m_Speed_ES;
		wxStaticText* m_staticText331111111;
		wxButton* m_button3112;
		wxButton* m_button31111;
		wxStaticBitmap* m_bitmap2;
		wxPanel* m_panel3;
		wxPanel* m_panel8;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_Approach_SS;
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText321;
		wxTextCtrl* m_dx_SS;
		wxStaticText* m_staticText331;
		wxStaticText* m_staticText321111122;
		wxTextCtrl* m_Speed_SS;
		wxStaticText* m_staticText331111112;
		wxStaticText* m_staticText321111111;
		wxChoice* m_Ncycles;
		wxButton* m_button31121;
		wxButton* m_button311111;
		wxStaticBitmap* m_bitmap3;
		wxPanel* m_Approach_OR;
		wxPanel* m_panel10;
		wxStaticText* m_staticText152;
		wxStaticText* m_staticText323;
		wxTextCtrl* m_textCtrl253;
		wxStaticText* m_staticText333;
		wxStaticText* m_staticText3212;
		wxTextCtrl* m_dx_OR;
		wxStaticText* m_staticText3312;
		wxStaticText* m_staticText32121;
		wxTextCtrl* m_Angle_OR;
		wxStaticText* m_staticText33121;
		wxStaticText* m_staticText321111123;
		wxTextCtrl* m_Speed_OR;
		wxStaticText* m_staticText331111113;
		wxButton* m_button31122;
		wxButton* m_button311112;
		wxStaticBitmap* m_bitmap4;
		wxNotebook* m_wxNotebook234;
		wxPanel* m_panel11;
		wxStaticText* m_staticText3231;
		wxTextCtrl* m_Lat1;
		wxStaticText* m_staticText3331;
		wxStaticText* m_staticText32311;
		wxTextCtrl* m_Lon1;
		wxStaticText* m_staticText33311;
		wxStaticText* m_staticText323122;
		wxTextCtrl* m_Route;
		wxPanel* m_panel15;
		wxStaticText* m_staticText32313;
		wxTextCtrl* m_Lat1_d;
		wxStaticText* m_staticText33313;
		wxTextCtrl* m_Lat1_m;
		wxStaticText* m_staticText1143;
		wxTextCtrl* m_Lat1_s;
		wxStaticText* m_staticText1153;
		wxChoice* m_Lat1_NS;
		wxStaticText* m_staticText323112;
		wxTextCtrl* m_Lon1_d;
		wxStaticText* m_staticText333112;
		wxTextCtrl* m_Lon1_m;
		wxStaticText* m_staticText11412;
		wxTextCtrl* m_Lon1_s;
		wxStaticText* m_staticText11512;
		wxChoice* m_Lon1_EW;
		wxButton* m_button81;
		wxPanel* m_panel111;
		wxPanel* m_panel61;
		wxStaticText* m_staticText15111;
		wxStaticText* m_staticText32211;
		wxTextCtrl* m_Distance;
		wxStaticText* m_staticText33211;
		wxStaticText* m_Statictext34;
		wxTextCtrl* m_Time;
		wxStaticText* m_staticText331121;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnPSCalc( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPSGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnESCalc( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnESGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSSCalc( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSSGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnORCalc( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnORGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNoteBookFit( wxNotebookEvent& event ) { event.Skip(); }
		virtual void OnConverttoDegree( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxBoxSizer* bSframe;
		
		DlgDef( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DlgDef();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CfgDlgDef
///////////////////////////////////////////////////////////////////////////////
class CfgDlgDef : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText221;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText14;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText16;
		wxStaticText* m_staticText22;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
	
	public:
		wxSlider* m_sOpacity;
		wxRadioButton* m_rbMeters;
		wxRadioButton* m_rbFeet;
		wxRadioButton* m_rbFathoms;
		wxCheckBox* m_cbRenderOverlay;
		wxRadioButton* m_rbRendedAllSurveys;
		wxRadioButton* m_rbRenderActiveSurvey;
		wxCheckBox* m_cbConnectSoundings;
		wxColourPickerCtrl* m_cpSoundingColor;
		wxColourPickerCtrl* m_cpConnectorColor;
		wxColourPickerCtrl* m_cpFontColor;
		wxFontPickerCtrl* m_fpFont;
		wxTextCtrl* m_tLOA;
		wxTextCtrl* m_tBeam;
		wxTextCtrl* m_tSounderBow;
		wxTextCtrl* m_tWaterlineOffset;
		wxTextCtrl* m_tGPSBow;
		wxTextCtrl* m_tGPSPort;
		wxTextCtrl* m_tMinDistance;
		wxTextCtrl* m_tAutoNewDistance;
		
		CfgDlgDef( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 496,587 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~CfgDlgDef();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SurveyMergeDlgDef
///////////////////////////////////////////////////////////////////////////////
class SurveyMergeDlgDef : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText28;
		wxChoice* m_cMergeWith;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3OK;
		wxButton* m_sdbSizer3Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMergeCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMergeOkClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SurveyMergeDlgDef( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Merge surveys"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 525,286 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~SurveyMergeDlgDef();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog4
///////////////////////////////////////////////////////////////////////////////
class MyDialog4 : public wxDialog 
{
	private:
	
	protected:
	
	public:
		
		MyDialog4( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~MyDialog4();
	
};

#endif //__SARGUI_H__

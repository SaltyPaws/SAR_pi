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
#include <wx/statbox.h>
#include <wx/notebook.h>
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
		wxPanel* m_panel6;
		wxStaticText* m_staticText1511;
		wxStaticText* m_staticText3221;
		wxTextCtrl* m_textCtrl2521;
		wxStaticText* m_staticText3321;
		wxStaticText* m_staticText32112;
		wxTextCtrl* m_textCtrl25112;
		wxStaticText* m_staticText33112;
		wxStaticText* m_staticText321111;
		wxTextCtrl* m_textCtrl251111;
		wxStaticText* m_staticText331111;
		wxStaticText* m_staticText3211111;
		wxTextCtrl* m_textCtrl2511111;
		wxStaticText* m_staticText3311111;
		wxStaticText* m_staticText32111111;
		wxChoice* m_choice1;
		wxButton* m_button311;
		wxStaticBitmap* m_bitmap21;
		wxPanel* m_panel2;
		wxPanel* m_panel7;
		wxStaticText* m_staticText151;
		wxStaticText* m_staticText322;
		wxTextCtrl* m_chSurvey;
		wxStaticText* m_staticText332;
		wxStaticText* m_staticText3211;
		wxTextCtrl* m_textCtrl2511;
		wxStaticText* m_staticText3311;
		wxStaticText* m_staticText32111;
		wxTextCtrl* m_textCtrl25111;
		wxStaticText* m_staticText33111;
		wxButton* m_button31;
		wxStaticBitmap* m_bitmap2;
		wxPanel* m_panel3;
		wxPanel* m_panel8;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText321;
		wxTextCtrl* m_textCtrl251;
		wxStaticText* m_staticText331;
		wxButton* m_button3;
		wxStaticBitmap* m_bitmap3;
		wxPanel* m_panel4;
		wxPanel* m_panel10;
		wxStaticText* m_staticText152;
		wxStaticText* m_staticText323;
		wxTextCtrl* m_textCtrl253;
		wxStaticText* m_staticText333;
		wxStaticText* m_staticText3212;
		wxTextCtrl* m_textCtrl2512;
		wxStaticText* m_staticText3312;
		wxStaticText* m_staticText32121;
		wxTextCtrl* m_textCtrl25121;
		wxStaticText* m_staticText33121;
		wxButton* m_button32;
		wxStaticBitmap* m_bitmap4;
		wxPanel* m_panel111;
		wxNotebook* m_notebook11;
		wxPanel* m_panel13;
		wxPanel* m_panel62;
		wxStaticText* m_staticText15112;
		wxStaticText* m_staticText32213;
		wxTextCtrl* m_IntervalNM;
		wxStaticText* m_staticText33213;
		wxButton* m_button11;
		wxStaticText* m_staticText32211;
		wxTextCtrl* m_distance_GC;
		wxStaticText* m_staticText33211;
		wxStaticText* m_statictext234;
		wxTextCtrl* m_distance_RH;
		wxStaticText* m_staticText332111;
		wxButton* m_button111;
		wxButton* m_button6;
		wxPanel* m_panel12;
		wxPanel* m_panel61;
		wxStaticText* m_staticText15111;
		wxStaticText* m_staticText32212;
		wxTextCtrl* m_IntervalNM1;
		wxStaticText* m_staticText33212;
		wxStaticText* m_staticText322121;
		wxTextCtrl* m_LatLimit;
		wxStaticText* m_staticText332121;
		wxButton* m_button112;
		wxStaticText* m_staticText322111;
		wxTextCtrl* m_distance_LC;
		wxStaticText* m_staticText332112;
		wxStaticText* m_statictext2341;
		wxTextCtrl* m_distance_GC1;
		wxStaticText* m_staticText3321111;
		wxStaticText* m_statictext23411;
		wxTextCtrl* m_distance_RH1;
		wxStaticText* m_staticText33211111;
		wxButton* m_button1111;
		wxNotebook* m_wxNotebook234;
		wxPanel* m_panel11;
		wxStaticText* m_staticText3231;
		wxTextCtrl* m_Lat1;
		wxStaticText* m_staticText3331;
		wxStaticText* m_staticText32311;
		wxTextCtrl* m_Lon1;
		wxStaticText* m_staticText33311;
		wxStaticText* m_staticText32312;
		wxTextCtrl* m_Lat2;
		wxStaticText* m_staticText33312;
		wxStaticText* m_staticText323111;
		wxTextCtrl* m_Lon2;
		wxStaticText* m_staticText333111;
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
		wxStaticText* m_staticText323121;
		wxTextCtrl* m_Lat2_d;
		wxStaticText* m_staticText333121;
		wxTextCtrl* m_Lat2_m;
		wxStaticText* m_staticText11421;
		wxTextCtrl* m_Lat2_s;
		wxStaticText* m_staticText11521;
		wxChoice* m_Lat2_NS;
		wxStaticText* m_staticText3231111;
		wxTextCtrl* m_Lon2_d;
		wxStaticText* m_staticText3331111;
		wxTextCtrl* m_Lon2_m;
		wxStaticText* m_staticText114111;
		wxTextCtrl* m_Lon2_s;
		wxStaticText* m_staticText115111;
		wxChoice* m_Lon2_EW;
		wxButton* m_button81;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnNewSurvey( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGCCalculate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportGC( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportRH( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGCLCalculate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportGCL( wxCommandEvent& event ) { event.Skip(); }
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

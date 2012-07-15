///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 11 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "sargui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 500,400 ), wxDefaultSize );
	
	bSframe = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( -1,345 ), 0 );
	m_notebook1->SetMinSize( wxSize( 615,345 ) );
	
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	m_panel1->SetMinSize( wxSize( 615,335 ) );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_panel6 = new wxPanel( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel6->SetMinSize( wxSize( 300,335 ) );
	
	wxBoxSizer* bSizer9111;
	bSizer9111 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1511 = new wxStaticText( m_panel6, wxID_ANY, _("Parallel Search\n     Pattern"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1511->Wrap( -1 );
	m_staticText1511->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer9111->Add( m_staticText1511, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer1311;
	bSizer1311 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer1421;
	bSizer1421 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3221 = new wxStaticText( m_panel6, wxID_ANY, _("Approach course     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3221->Wrap( -1 );
	bSizer1421->Add( m_staticText3221, 0, wxALL, 5 );
	
	m_textCtrl2521 = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1421->Add( m_textCtrl2521, 0, wxALL, 5 );
	
	m_staticText3321 = new wxStaticText( m_panel6, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3321->Wrap( -1 );
	bSizer1421->Add( m_staticText3321, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer1421, 0, 0, 5 );
	
	wxBoxSizer* bSizer14112;
	bSizer14112 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32112 = new wxStaticText( m_panel6, wxID_ANY, _("Leg Distance x           "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32112->Wrap( -1 );
	bSizer14112->Add( m_staticText32112, 0, wxALL, 5 );
	
	m_textCtrl25112 = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14112->Add( m_textCtrl25112, 0, wxALL, 5 );
	
	m_staticText33112 = new wxStaticText( m_panel6, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33112->Wrap( -1 );
	bSizer14112->Add( m_staticText33112, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer14112, 0, 0, 5 );
	
	wxBoxSizer* bSizer141111;
	bSizer141111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText321111 = new wxStaticText( m_panel6, wxID_ANY, _("Leg Distance y           "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111->Wrap( -1 );
	bSizer141111->Add( m_staticText321111, 0, wxALL, 5 );
	
	m_textCtrl251111 = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141111->Add( m_textCtrl251111, 0, wxALL, 5 );
	
	m_staticText331111 = new wxStaticText( m_panel6, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111->Wrap( -1 );
	bSizer141111->Add( m_staticText331111, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer141111, 0, 0, 5 );
	
	wxBoxSizer* bSizer1411111;
	bSizer1411111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3211111 = new wxStaticText( m_panel6, wxID_ANY, _("Number of Legs       "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211111->Wrap( -1 );
	bSizer1411111->Add( m_staticText3211111, 0, wxALL, 5 );
	
	m_textCtrl2511111 = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1411111->Add( m_textCtrl2511111, 0, wxALL, 5 );
	
	m_staticText3311111 = new wxStaticText( m_panel6, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311111->Wrap( -1 );
	bSizer1411111->Add( m_staticText3311111, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer1411111, 0, 0, 5 );
	
	wxBoxSizer* bSizer14111111;
	bSizer14111111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32111111 = new wxStaticText( m_panel6, wxID_ANY, _("Number of Ships      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111111->Wrap( -1 );
	bSizer14111111->Add( m_staticText32111111, 0, wxALL, 5 );
	
	wxString m_choice1Choices[] = { _("1"), _("2") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer14111111->Add( m_choice1, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer14111111, 0, 0, 5 );
	
	
	bSizer9111->Add( bSizer1311, 0, 0, 5 );
	
	m_button311 = new wxButton( m_panel6, wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9111->Add( m_button311, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	m_panel6->SetSizer( bSizer9111 );
	m_panel6->Layout();
	bSizer9111->Fit( m_panel6 );
	bSizer3->Add( m_panel6, 0, wxALL, 5 );
	
	m_bitmap21 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("bitmaps/trackln.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap21->SetMinSize( wxSize( 290,300 ) );
	
	bSizer3->Add( m_bitmap21, 0, wxALL, 5 );
	
	
	m_panel1->SetSizer( bSizer3 );
	m_panel1->Layout();
	bSizer3->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _("SAR: Trackline"), false );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	m_panel2->SetMinSize( wxSize( -1,335 ) );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_panel7 = new wxPanel( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer911;
	bSizer911 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText151 = new wxStaticText( m_panel7, wxID_ANY, _("Expanding Square\n         Search"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText151->Wrap( -1 );
	m_staticText151->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer911->Add( m_staticText151, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer142;
	bSizer142 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText322 = new wxStaticText( m_panel7, wxID_ANY, _("Approach course     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText322->Wrap( -1 );
	bSizer142->Add( m_staticText322, 0, wxALL, 5 );
	
	m_chSurvey = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer142->Add( m_chSurvey, 0, wxALL, 5 );
	
	m_staticText332 = new wxStaticText( m_panel7, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText332->Wrap( -1 );
	bSizer142->Add( m_staticText332, 0, wxALL, 5 );
	
	
	bSizer131->Add( bSizer142, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer1411;
	bSizer1411 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3211 = new wxStaticText( m_panel7, wxID_ANY, _("Leg Distance               "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211->Wrap( -1 );
	bSizer1411->Add( m_staticText3211, 0, wxALL, 5 );
	
	m_textCtrl2511 = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1411->Add( m_textCtrl2511, 0, wxALL, 5 );
	
	m_staticText3311 = new wxStaticText( m_panel7, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311->Wrap( -1 );
	bSizer1411->Add( m_staticText3311, 0, wxALL, 5 );
	
	
	bSizer131->Add( bSizer1411, 0, 0, 5 );
	
	wxBoxSizer* bSizer14111;
	bSizer14111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32111 = new wxStaticText( m_panel7, wxID_ANY, _("Number of Squares"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111->Wrap( -1 );
	bSizer14111->Add( m_staticText32111, 0, wxALL, 5 );
	
	m_textCtrl25111 = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14111->Add( m_textCtrl25111, 0, wxALL, 5 );
	
	m_staticText33111 = new wxStaticText( m_panel7, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33111->Wrap( -1 );
	bSizer14111->Add( m_staticText33111, 0, wxALL, 5 );
	
	
	bSizer131->Add( bSizer14111, 0, 0, 5 );
	
	
	bSizer911->Add( bSizer131, 0, 0, 5 );
	
	m_button31 = new wxButton( m_panel7, wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer911->Add( m_button31, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	m_panel7->SetSizer( bSizer911 );
	m_panel7->Layout();
	bSizer911->Fit( m_panel7 );
	bSizer4->Add( m_panel7, 0, wxALL, 5 );
	
	m_bitmap2 = new wxStaticBitmap( m_panel2, wxID_ANY, wxBitmap( wxT("bitmaps/exp_sq.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMinSize( wxSize( 290,300 ) );
	
	bSizer4->Add( m_bitmap2, 0, wxALL, 5 );
	
	
	m_panel2->SetSizer( bSizer4 );
	m_panel2->Layout();
	bSizer4->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, _("SAR: Expanding Square"), false );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_panel8 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText15 = new wxStaticText( m_panel8, wxID_ANY, _("Sector Search"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer91->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32 = new wxStaticText( m_panel8, wxID_ANY, _("Approach course"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer14->Add( m_staticText32, 0, wxALL, 5 );
	
	m_textCtrl25 = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_textCtrl25, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText33 = new wxStaticText( m_panel8, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer14->Add( m_staticText33, 0, wxALL, 5 );
	
	
	bSizer13->Add( bSizer14, 0, 0, 5 );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText321 = new wxStaticText( m_panel8, wxID_ANY, _("Leg Distance          "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321->Wrap( -1 );
	bSizer141->Add( m_staticText321, 0, wxALL, 5 );
	
	m_textCtrl251 = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141->Add( m_textCtrl251, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText331 = new wxStaticText( m_panel8, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331->Wrap( -1 );
	bSizer141->Add( m_staticText331, 0, wxALL, 5 );
	
	
	bSizer13->Add( bSizer141, 0, 0, 5 );
	
	
	bSizer91->Add( bSizer13, 0, 0, 5 );
	
	m_button3 = new wxButton( m_panel8, wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( m_button3, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	m_panel8->SetSizer( bSizer91 );
	m_panel8->Layout();
	bSizer91->Fit( m_panel8 );
	bSizer5->Add( m_panel8, 0, wxALL, 5 );
	
	m_bitmap3 = new wxStaticBitmap( m_panel3, wxID_ANY, wxBitmap( wxT("bitmaps/sector.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap3->SetMinSize( wxSize( 280,300 ) );
	
	bSizer5->Add( m_bitmap3, 0, wxALL, 5 );
	
	
	m_panel3->SetSizer( bSizer5 );
	m_panel3->Layout();
	bSizer5->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, _("SAR: Sector Search"), false );
	m_panel4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel4->SetMinSize( wxSize( 300,200 ) );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_panel10 = new wxPanel( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer912;
	bSizer912 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText152 = new wxStaticText( m_panel10, wxID_ANY, _("Oil Rig Search"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText152->Wrap( -1 );
	m_staticText152->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer912->Add( m_staticText152, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer143;
	bSizer143 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText323 = new wxStaticText( m_panel10, wxID_ANY, _("Approach course"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323->Wrap( -1 );
	bSizer143->Add( m_staticText323, 0, wxALL, 5 );
	
	m_textCtrl253 = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer143->Add( m_textCtrl253, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText333 = new wxStaticText( m_panel10, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333->Wrap( -1 );
	bSizer143->Add( m_staticText333, 0, wxALL, 5 );
	
	
	bSizer132->Add( bSizer143, 1, wxEXPAND|wxALIGN_RIGHT, 5 );
	
	wxBoxSizer* bSizer1412;
	bSizer1412 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3212 = new wxStaticText( m_panel10, wxID_ANY, _("Leg Distance          "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3212->Wrap( -1 );
	bSizer1412->Add( m_staticText3212, 0, wxALL, 5 );
	
	m_textCtrl2512 = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1412->Add( m_textCtrl2512, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText3312 = new wxStaticText( m_panel10, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3312->Wrap( -1 );
	bSizer1412->Add( m_staticText3312, 0, wxALL, 5 );
	
	
	bSizer132->Add( bSizer1412, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14121;
	bSizer14121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32121 = new wxStaticText( m_panel10, wxID_ANY, _("Sector Angle          "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32121->Wrap( -1 );
	bSizer14121->Add( m_staticText32121, 0, wxALL, 5 );
	
	m_textCtrl25121 = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14121->Add( m_textCtrl25121, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText33121 = new wxStaticText( m_panel10, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33121->Wrap( -1 );
	bSizer14121->Add( m_staticText33121, 0, wxALL, 5 );
	
	
	bSizer132->Add( bSizer14121, 1, wxEXPAND, 5 );
	
	
	bSizer912->Add( bSizer132, 1, wxEXPAND, 5 );
	
	m_button32 = new wxButton( m_panel10, wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer912->Add( m_button32, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	m_panel10->SetSizer( bSizer912 );
	m_panel10->Layout();
	bSizer912->Fit( m_panel10 );
	bSizer6->Add( m_panel10, 0, wxALL, 5 );
	
	m_bitmap4 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("bitmaps/oil_rig.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap4->SetMinSize( wxSize( 300,300 ) );
	
	bSizer6->Add( m_bitmap4, 0, wxALL, 5 );
	
	
	m_panel4->SetSizer( bSizer6 );
	m_panel4->Layout();
	bSizer6->Fit( m_panel4 );
	m_notebook1->AddPage( m_panel4, _("SAR: Oil Rig"), true );
	
	bSframe->Add( m_notebook1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );
	
	m_panel11 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panel11, wxID_ANY, _("Start of Search") ), wxVERTICAL );
	
	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer1431;
	bSizer1431 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3231 = new wxStaticText( m_panel11, wxID_ANY, _("Lattitude  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231->Wrap( -1 );
	bSizer1431->Add( m_staticText3231, 0, wxALL, 5 );
	
	m_textCtrl2531 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_textCtrl2531, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText3331 = new wxStaticText( m_panel11, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331->Wrap( -1 );
	bSizer1431->Add( m_staticText3331, 0, wxALL, 5 );
	
	m_textCtrl61 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_textCtrl61, 0, wxALL, 5 );
	
	m_staticText114 = new wxStaticText( m_panel11, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText114->Wrap( -1 );
	bSizer1431->Add( m_staticText114, 0, wxALL, 5 );
	
	m_textCtrl62 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_textCtrl62, 0, wxALL, 5 );
	
	m_staticText115 = new wxStaticText( m_panel11, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	bSizer1431->Add( m_staticText115, 0, wxALL, 5 );
	
	
	bSizer1321->Add( bSizer1431, 0, 0, 5 );
	
	wxBoxSizer* bSizer14311;
	bSizer14311 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32311 = new wxStaticText( m_panel11, wxID_ANY, _("Longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32311->Wrap( -1 );
	bSizer14311->Add( m_staticText32311, 0, wxALL, 5 );
	
	m_textCtrl25311 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_textCtrl25311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText33311 = new wxStaticText( m_panel11, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33311->Wrap( -1 );
	bSizer14311->Add( m_staticText33311, 0, wxALL, 5 );
	
	m_textCtrl611 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_textCtrl611, 0, wxALL, 5 );
	
	m_staticText1141 = new wxStaticText( m_panel11, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1141->Wrap( -1 );
	bSizer14311->Add( m_staticText1141, 0, wxALL, 5 );
	
	m_textCtrl621 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_textCtrl621, 0, wxALL, 5 );
	
	m_staticText1151 = new wxStaticText( m_panel11, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1151->Wrap( -1 );
	bSizer14311->Add( m_staticText1151, 0, wxALL, 5 );
	
	
	bSizer1321->Add( bSizer14311, 0, 0, 5 );
	
	
	sbSizer7->Add( bSizer1321, 0, 0, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_btnNew = new wxButton( m_panel11, wxID_ANY, _("New"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnNew, 0, wxALL, 5 );
	
	m_btnDelete = new wxButton( m_panel11, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnDelete, 0, wxALL, 5 );
	
	m_btnProperties = new wxButton( m_panel11, wxID_ANY, _("Properties"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnProperties, 0, wxALL, 5 );
	
	m_btnZoomTo = new wxButton( m_panel11, wxID_ANY, _("Zoom to"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnZoomTo, 0, wxALL, 5 );
	
	m_btnMerge = new wxButton( m_panel11, wxID_ANY, _("Merge..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnMerge, 0, wxALL, 5 );
	
	m_btnImport = new wxButton( m_panel11, wxID_ANY, _("Import..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnImport, 0, wxALL, 5 );
	
	m_btnExport = new wxButton( m_panel11, wxID_ANY, _("Export..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_btnExport, 0, wxALL, 5 );
	
	
	sbSizer7->Add( bSizer9, 1, wxEXPAND, 5 );
	
	
	m_panel11->SetSizer( sbSizer7 );
	m_panel11->Layout();
	sbSizer7->Fit( m_panel11 );
	bSizer35->Add( m_panel11, 1, wxEXPAND | wxALL, 5 );
	
	
	bSframe->Add( bSizer35, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSframe );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button311->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnNewSurvey ), NULL, this );
	m_btnNew->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnNewSurvey ), NULL, this );
	m_btnDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnDeleteSurvey ), NULL, this );
	m_btnProperties->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSurveyProperties ), NULL, this );
	m_btnZoomTo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnZoomToSurvey ), NULL, this );
	m_btnMerge->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnMergeSurvey ), NULL, this );
	m_btnImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnImportSurvey ), NULL, this );
	m_btnExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnExportSurvey ), NULL, this );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	m_button311->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnNewSurvey ), NULL, this );
	m_btnNew->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnNewSurvey ), NULL, this );
	m_btnDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnDeleteSurvey ), NULL, this );
	m_btnProperties->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSurveyProperties ), NULL, this );
	m_btnZoomTo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnZoomToSurvey ), NULL, this );
	m_btnMerge->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnMergeSurvey ), NULL, this );
	m_btnImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnImportSurvey ), NULL, this );
	m_btnExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnExportSurvey ), NULL, this );
	
}

CfgDlgDef::CfgDlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("General settings") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer3->Add( m_staticText17, 0, wxALL, 5 );
	
	m_sOpacity = new wxSlider( this, wxID_ANY, 50, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer3->Add( m_sOpacity, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer4->Add( fgSizer3, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText221 = new wxStaticText( this, wxID_ANY, _("Display values as"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer5->Add( m_staticText221, 0, wxALL, 5 );
	
	m_rbMeters = new wxRadioButton( this, wxID_ANY, _("Meters"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	m_rbMeters->SetValue( true ); 
	bSizer5->Add( m_rbMeters, 0, wxALL, 5 );
	
	m_rbFeet = new wxRadioButton( this, wxID_ANY, _("Feet"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_rbFeet, 0, wxALL, 5 );
	
	m_rbFathoms = new wxRadioButton( this, wxID_ANY, _("Fathoms"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_rbFathoms, 0, wxALL, 5 );
	
	
	sbSizer4->Add( bSizer5, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer4, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Overlay settings") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_cbRenderOverlay = new wxCheckBox( this, wxID_ANY, _("Render overlay"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_cbRenderOverlay, 0, wxALL, 5 );
	
	m_rbRendedAllSurveys = new wxRadioButton( this, wxID_ANY, _("Render all data"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	m_rbRendedAllSurveys->SetValue( true ); 
	bSizer3->Add( m_rbRendedAllSurveys, 0, wxALL, 5 );
	
	m_rbRenderActiveSurvey = new wxRadioButton( this, wxID_ANY, _("Render just active survey data"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_rbRenderActiveSurvey, 0, wxALL, 5 );
	
	m_cbConnectSoundings = new wxCheckBox( this, wxID_ANY, _("Connect soundings"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_cbConnectSoundings, 0, wxALL, 5 );
	
	
	fgSizer4->Add( bSizer3, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, _("Sounding color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	gSizer2->Add( m_staticText18, 0, wxALL, 5 );
	
	m_cpSoundingColor = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	gSizer2->Add( m_cpSoundingColor, 0, wxALL, 5 );
	
	m_staticText19 = new wxStaticText( this, wxID_ANY, _("Connector color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	gSizer2->Add( m_staticText19, 0, wxALL, 5 );
	
	m_cpConnectorColor = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	gSizer2->Add( m_cpConnectorColor, 0, wxALL, 5 );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, _("Text color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	gSizer2->Add( m_staticText23, 0, wxALL, 5 );
	
	m_cpFontColor = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	gSizer2->Add( m_cpFontColor, 0, wxALL, 5 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer2->Add( m_staticText21, 0, wxALL, 5 );
	
	m_fpFont = new wxFontPickerCtrl( this, wxID_ANY, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_DEFAULT_STYLE );
	m_fpFont->SetMaxPointSize( 100 ); 
	gSizer2->Add( m_fpFont, 0, wxALL, 5 );
	
	
	bSizer4->Add( gSizer2, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( bSizer4, 1, wxEXPAND, 5 );
	
	
	sbSizer3->Add( fgSizer4, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer3, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Boat size / sensor position") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 6, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, _("LOA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	fgSizer1->Add( m_staticText1, 0, wxALL, 5 );
	
	m_tLOA = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tLOA, 0, wxALL, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer1->Add( m_staticText3, 0, wxALL, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Beam"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer1->Add( m_staticText2, 0, wxALL, 5 );
	
	m_tBeam = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tBeam, 0, wxALL, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer1->Add( m_staticText4, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Sounder from bow"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALL, 5 );
	
	m_tSounderBow = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tSounderBow, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer1->Add( m_staticText6, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Waterline offset"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer1->Add( m_staticText7, 0, wxALL, 5 );
	
	m_tWaterlineOffset = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tWaterlineOffset, 0, wxALL, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer1->Add( m_staticText8, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, _("GPS from bow"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer1->Add( m_staticText9, 0, wxALL, 5 );
	
	m_tGPSBow = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tGPSBow, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer1->Add( m_staticText10, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, _("GPS from port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizer1->Add( m_staticText11, 0, wxALL, 5 );
	
	m_tGPSPort = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_tGPSPort, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer1->Add( m_staticText12, 0, wxALL, 5 );
	
	
	sbSizer1->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( sbSizer1, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Filtering") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, _("Do not record values if less than"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer2->Add( m_staticText13, 0, wxALL, 5 );
	
	m_tMinDistance = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_tMinDistance, 0, wxALL, 5 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, _("m apart"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer2->Add( m_staticText14, 0, wxALL, 5 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, _("Automatically start new survey if more than"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer2->Add( m_staticText15, 0, wxALL, 5 );
	
	m_tAutoNewDistance = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_tAutoNewDistance, 0, wxALL, 5 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, _("m from last sounding"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer2->Add( m_staticText16, 0, wxALL, 5 );
	
	
	sbSizer2->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	m_staticText22 = new wxStaticText( this, wxID_ANY, _("Leave empty if you don't want to use this functionality"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	sbSizer2->Add( m_staticText22, 0, wxALL, 5 );
	
	
	bSizer2->Add( sbSizer2, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	
	bSizer1->Add( m_sdbSizer1, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

CfgDlgDef::~CfgDlgDef()
{
}

SurveyMergeDlgDef::SurveyMergeDlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, _("Merge survey XXX with"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer14->Add( m_staticText28, 0, wxALL, 5 );
	
	wxArrayString m_cMergeWithChoices;
	m_cMergeWith = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cMergeWithChoices, 0 );
	m_cMergeWith->SetSelection( 0 );
	bSizer14->Add( m_cMergeWith, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3OK = new wxButton( this, wxID_OK );
	m_sdbSizer3->AddButton( m_sdbSizer3OK );
	m_sdbSizer3Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	
	bSizer13->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer13 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_sdbSizer3Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SurveyMergeDlgDef::OnMergeCancelClick ), NULL, this );
	m_sdbSizer3OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SurveyMergeDlgDef::OnMergeOkClick ), NULL, this );
}

SurveyMergeDlgDef::~SurveyMergeDlgDef()
{
	// Disconnect Events
	m_sdbSizer3Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SurveyMergeDlgDef::OnMergeCancelClick ), NULL, this );
	m_sdbSizer3OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SurveyMergeDlgDef::OnMergeOkClick ), NULL, this );
	
}

MyDialog4::MyDialog4( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	
	this->Centre( wxBOTH );
}

MyDialog4::~MyDialog4()
{
}

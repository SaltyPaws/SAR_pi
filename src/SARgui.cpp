///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "SARgui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	std::string DEGREE = "\u00b0";
	wxString degString(DEGREE);

	bSframe = new wxBoxSizer( wxVERTICAL );

	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	wx_panel_dome = new wxPanel( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer9111;
	bSizer9111 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1311;
	bSizer1311 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1421;
	bSizer1421 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3221 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Initial leg course        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3221->Wrap( -1 );
	bSizer1421->Add( m_staticText3221, 0, wxALL, 5 );

	m_Approach_PS = new wxTextCtrl( wx_panel_dome, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1421->Add( m_Approach_PS, 0, wxALL, 5 );

	m_staticText3321 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3321->Wrap( -1 );
	bSizer1421->Add( m_staticText3321, 0, wxALL, 5 );


	bSizer1311->Add( bSizer1421, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14112;
	bSizer14112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32112 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Search Leg length     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32112->Wrap( -1 );
	bSizer14112->Add( m_staticText32112, 0, wxALL, 5 );

	m_dx_PS = new wxTextCtrl( wx_panel_dome, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14112->Add( m_dx_PS, 0, wxALL, 5 );

	m_staticText33112 = new wxStaticText( wx_panel_dome, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33112->Wrap( -1 );
	bSizer14112->Add( m_staticText33112, 0, wxALL, 5 );


	bSizer1311->Add( bSizer14112, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer141111;
	bSizer141111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Track space (S)          "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111->Wrap( -1 );
	bSizer141111->Add( m_staticText321111, 0, wxALL, 5 );

	m_dy_PS = new wxTextCtrl( wx_panel_dome, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141111->Add( m_dy_PS, 0, wxALL, 5 );

	m_staticText331111 = new wxStaticText( wx_panel_dome, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111->Wrap( -1 );
	bSizer141111->Add( m_staticText331111, 0, wxALL, 5 );


	bSizer1311->Add( bSizer141111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer1411111;
	bSizer1411111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3211111 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Number of Legs        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211111->Wrap( -1 );
	bSizer1411111->Add( m_staticText3211111, 0, wxALL, 5 );

	m_n_PS = new wxTextCtrl( wx_panel_dome, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1411111->Add( m_n_PS, 0, wxALL, 5 );

	m_staticText3311111 = new wxStaticText( wx_panel_dome, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311111->Wrap( -1 );
	bSizer1411111->Add( m_staticText3311111, 0, wxALL, 5 );


	bSizer1311->Add( bSizer1411111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14111112;
	bSizer14111112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111112 = new wxStaticText( wx_panel_dome, wxID_ANY, _("Search Speed             "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111112->Wrap( -1 );
	bSizer14111112->Add( m_staticText32111112, 0, wxALL, 5 );

	m_Speed_PS = new wxTextCtrl( wx_panel_dome, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14111112->Add( m_Speed_PS, 0, wxALL, 5 );

	m_staticText33111111 = new wxStaticText( wx_panel_dome, wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33111111->Wrap( -1 );
	bSizer14111112->Add( m_staticText33111111, 0, wxALL, 5 );


	bSizer1311->Add( bSizer14111112, 0, wxEXPAND, 5 );

	m_staticline8 = new wxStaticLine( wx_panel_dome, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1311->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer711;
	sbSizer711 = new wxStaticBoxSizer( new wxStaticBox( wx_panel_dome, wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_button3111 = new wxButton( sbSizer711->GetStaticBox(), wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer71->Add( m_button3111, 0, wxALL, 5 );


	sbSizer711->Add( bSizer71, 1, wxALIGN_CENTER, 5 );


	bSizer1311->Add( sbSizer711, 0, wxEXPAND, 5 );


	bSizer9111->Add( bSizer1311, 0, wxEXPAND, 5 );


	wx_panel_dome->SetSizer( bSizer9111 );
	wx_panel_dome->Layout();
	bSizer9111->Fit( wx_panel_dome );
	bSizer3->Add( wx_panel_dome, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );

	m_bitmap_trackln1 = new wxStaticBitmap( m_panel1, wxID_ANY, wxNullBitmap);
	bSizer77->Add( m_bitmap_trackln1, 0, wxALL, 5 );

	bSizer62->Add( bSizer77, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer14111111;
	bSizer14111111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111111 = new wxStaticText( m_panel1, wxID_ANY, _("Route for Ship           "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111111->Wrap( -1 );
	bSizer14111111->Add( m_staticText32111111, 0, wxALL, 5 );

	wxString m_NshipChoices[] = { _("1 unit only"), _("2 units A&B") };
	int m_NshipNChoices = sizeof( m_NshipChoices ) / sizeof( wxString );
	m_Nship = new wxChoice( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NshipNChoices, m_NshipChoices, 0 );
	m_Nship->SetSelection( 0 );
	bSizer14111111->Add( m_Nship, 0, wxALL, 5 );


	bSizer62->Add( bSizer14111111, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer141111112;
	bSizer141111112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextPortStbd = new wxStaticText( m_panel1, wxID_ANY, _("First turn                    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPortStbd->Wrap( -1 );
	bSizer141111112->Add( m_staticTextPortStbd, 0, wxALL, 5 );

	wxString m_NPortStbdChoices[] = { _("STARBOARD"), _("PORT") };
	int m_NPortStbdNChoices = sizeof( m_NPortStbdChoices ) / sizeof( wxString );
	m_NPortStbd = new wxChoice( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NPortStbdNChoices, m_NPortStbdChoices, 0 );
	m_NPortStbd->SetSelection( 0 );
	bSizer141111112->Add( m_NPortStbd, 0, wxALL, 5 );


	bSizer62->Add( bSizer141111112, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox1 = new wxCheckBox( m_panel1, wxID_ANY, _("Waypoint names     "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox1->SetValue(true);
	bSizer78->Add( m_checkBox1, 0, wxALL, 5 );

	m_checkBoxIcons1 = new wxCheckBox( m_panel1, wxID_ANY, _("Icons "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons1->SetValue(true);
	bSizer78->Add( m_checkBoxIcons1, 0, wxALL, 5 );


	bSizer62->Add( bSizer78, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizer62, 0, wxALL|wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer3 );
	m_panel1->Layout();
	bSizer3->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _("Parallel Track"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_panel7 = new wxPanel( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer911;
	bSizer911 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer142;
	bSizer142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText322 = new wxStaticText( m_panel7, wxID_ANY, _("Initial course    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText322->Wrap( -1 );
	bSizer142->Add( m_staticText322, 0, wxALL, 5 );

	m_Approach_ES = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer142->Add( m_Approach_ES, 0, wxALL, 5 );

	m_staticText332 = new wxStaticText( m_panel7, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText332->Wrap( -1 );
	bSizer142->Add( m_staticText332, 0, wxALL, 5 );


	bSizer131->Add( bSizer142, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer1411;
	bSizer1411 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3211 = new wxStaticText( m_panel7, wxID_ANY, _("Leg Spacing (S)       "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211->Wrap( -1 );
	bSizer1411->Add( m_staticText3211, 0, wxALL, 5 );

	wxString m_dx_ESChoices[] = { _("3"), _("2"), _("1"), _("0.5"), _("0.2"), _("0.1") };
	int m_dx_ESNChoices = sizeof( m_dx_ESChoices ) / sizeof( wxString );
	m_dx_ES = new wxChoice( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_dx_ESNChoices, m_dx_ESChoices, 0 );
	m_dx_ES->SetSelection( 0 );
	bSizer1411->Add( m_dx_ES, 0, wxALL, 5 );

	m_staticText3311 = new wxStaticText( m_panel7, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311->Wrap( -1 );
	bSizer1411->Add( m_staticText3311, 0, wxALL, 5 );


	bSizer131->Add( bSizer1411, 0, 0, 5 );

	wxBoxSizer* bSizer14111;
	bSizer14111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111 = new wxStaticText( m_panel7, wxID_ANY, _("Number of Legs      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111->Wrap( -1 );
	bSizer14111->Add( m_staticText32111, 0, wxALL, 5 );

	m_n_ES = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14111->Add( m_n_ES, 0, wxALL, 5 );

	m_staticText33111 = new wxStaticText( m_panel7, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33111->Wrap( -1 );
	bSizer14111->Add( m_staticText33111, 0, wxALL, 5 );


	bSizer131->Add( bSizer14111, 0, 0, 5 );

	wxBoxSizer* bSizer141111121;
	bSizer141111121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111121 = new wxStaticText( m_panel7, wxID_ANY, _("Search Speed           "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111121->Wrap( -1 );
	bSizer141111121->Add( m_staticText321111121, 0, wxALL, 5 );

	m_Speed_ES = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141111121->Add( m_Speed_ES, 0, wxALL, 5 );

	m_staticText331111111 = new wxStaticText( m_panel7, wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111111->Wrap( -1 );
	bSizer141111121->Add( m_staticText331111111, 0, wxALL, 5 );


	bSizer131->Add( bSizer141111121, 0, wxEXPAND, 5 );

	m_staticline12 = new wxStaticLine( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer131->Add( m_staticline12, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer71;
	sbSizer71 = new wxStaticBoxSizer( new wxStaticBox( m_panel7, wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox2 = new wxCheckBox( sbSizer71->GetStaticBox(), wxID_ANY, _("Waypoint names     "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox2->SetValue(true);
	bSizer70->Add( m_checkBox2, 0, wxALL, 5 );

	m_checkBoxIcons2 = new wxCheckBox( sbSizer71->GetStaticBox(), wxID_ANY, _("Icons "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons2->SetValue(true);
	bSizer70->Add( m_checkBoxIcons2, 0, wxALL, 5 );


	sbSizer71->Add( bSizer70, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer711;
	bSizer711 = new wxBoxSizer( wxHORIZONTAL );

	m_button31111 = new wxButton( sbSizer71->GetStaticBox(), wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button31111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer711->Add( m_button31111, 0, wxALL, 5 );


	sbSizer71->Add( bSizer711, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer131->Add( sbSizer71, 0, wxEXPAND, 5 );


	bSizer911->Add( bSizer131, 0, wxEXPAND, 5 );


	m_panel7->SetSizer( bSizer911 );
	m_panel7->Layout();
	bSizer911->Fit( m_panel7 );
	bSizer4->Add( m_panel7, 0, wxALL|wxEXPAND, 5 );

	m_bitmap_exp_sq = new wxStaticBitmap( m_panel2, wxID_ANY, wxNullBitmap);
	bSizer4->Add( m_bitmap_exp_sq, 0, wxALL, 5 );


	m_panel2->SetSizer( bSizer4 );
	m_panel2->Layout();
	bSizer4->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, _("Expanding Square"), false );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_panel8 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32 = new wxStaticText( m_panel8, wxID_ANY, _("Initial course        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer14->Add( m_staticText32, 0, wxALL, 5 );

	m_Approach_SS = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_Approach_SS, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33 = new wxStaticText( m_panel8, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer14->Add( m_staticText33, 0, wxALL, 5 );


	bSizer13->Add( bSizer14, 0, 0, 5 );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321 = new wxStaticText( m_panel8, wxID_ANY, _("Search Radius      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321->Wrap( -1 );
	bSizer141->Add( m_staticText321, 0, wxALL, 5 );

	wxString m_dx_SSChoices[] = { _("5"), _("4"), _("3"), _("2"), _("1"), _("0.5") };
	int m_dx_SSNChoices = sizeof( m_dx_SSChoices ) / sizeof( wxString );
	m_dx_SS = new wxChoice( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_dx_SSNChoices, m_dx_SSChoices, 0 );
	m_dx_SS->SetSelection( 0 );
	bSizer141->Add( m_dx_SS, 0, wxALL, 5 );

	m_staticText331 = new wxStaticText( m_panel8, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331->Wrap( -1 );
	bSizer141->Add( m_staticText331, 0, wxALL, 5 );


	bSizer13->Add( bSizer141, 0, 0, 5 );

	wxBoxSizer* bSizer141111122;
	bSizer141111122 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111122 = new wxStaticText( m_panel8, wxID_ANY, _("Search Speed       "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111122->Wrap( -1 );
	bSizer141111122->Add( m_staticText321111122, 0, wxALL, 5 );

	m_Speed_SS = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141111122->Add( m_Speed_SS, 0, wxALL, 5 );

	m_staticText331111112 = new wxStaticText( m_panel8, wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111112->Wrap( -1 );
	bSizer141111122->Add( m_staticText331111112, 0, wxALL, 5 );


	bSizer13->Add( bSizer141111122, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer141111111;
	bSizer141111111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111111 = new wxStaticText( m_panel8, wxID_ANY, _("Number of passes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111111->Wrap( -1 );
	bSizer141111111->Add( m_staticText321111111, 0, wxALL, 5 );

	wxString m_NcyclesChoices[] = { _("1"), _("2") };
	int m_NcyclesNChoices = sizeof( m_NcyclesChoices ) / sizeof( wxString );
	m_Ncycles = new wxChoice( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NcyclesNChoices, m_NcyclesChoices, 0 );
	m_Ncycles->SetSelection( 1 );
	bSizer141111111->Add( m_Ncycles, 0, wxALL, 5 );


	bSizer13->Add( bSizer141111111, 0, wxEXPAND, 5 );

	m_staticline11 = new wxStaticLine( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer13->Add( m_staticline11, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer713;
	sbSizer713 = new wxStaticBoxSizer( new wxStaticBox( m_panel8, wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox3 = new wxCheckBox( sbSizer713->GetStaticBox(), wxID_ANY, _("Waypoint names     "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox3->SetValue(true);
	bSizer68->Add( m_checkBox3, 0, wxALL, 5 );

	m_checkBoxIcons3 = new wxCheckBox( sbSizer713->GetStaticBox(), wxID_ANY, _("Icons "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons3->SetValue(true);
	bSizer68->Add( m_checkBoxIcons3, 0, wxALL, 5 );


	sbSizer713->Add( bSizer68, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7111;
	bSizer7111 = new wxBoxSizer( wxHORIZONTAL );

	m_button311111 = new wxButton( sbSizer713->GetStaticBox(), wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button311111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer7111->Add( m_button311111, 0, wxALL, 5 );


	sbSizer713->Add( bSizer7111, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( sbSizer713, 0, wxEXPAND, 5 );


	bSizer91->Add( bSizer13, 0, wxEXPAND, 5 );


	m_panel8->SetSizer( bSizer91 );
	m_panel8->Layout();
	bSizer91->Fit( m_panel8 );
	bSizer5->Add( m_panel8, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxVERTICAL );

	m_bitmap_sector = new wxStaticBitmap( m_panel3, wxID_ANY, wxNullBitmap);
	bSizer67->Add( m_bitmap_sector, 0, wxALL, 5 );

	wxBoxSizer* bSizer1411111111;
	bSizer1411111111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3211111111 = new wxStaticText( m_panel3, wxID_ANY, _("Search Method  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211111111->Wrap( -1 );
	bSizer1411111111->Add( m_staticText3211111111, 0, wxALL, 5 );

	wxString m_VSMethodChoices[] = { _("IAMSAR"), _("USCG") };
	int m_VSMethodNChoices = sizeof( m_VSMethodChoices ) / sizeof( wxString );
	m_VSMethod = new wxChoice( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_VSMethodNChoices, m_VSMethodChoices, 0 );
	m_VSMethod->SetSelection( 0 );
	bSizer1411111111->Add( m_VSMethod, 0, wxALL, 5 );


	bSizer67->Add( bSizer1411111111, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer67, 1, wxEXPAND, 5 );


	m_panel3->SetSizer( bSizer5 );
	m_panel3->Layout();
	bSizer5->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, _("Sector Search"), false );
	m_panek4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_panel10 = new wxPanel( m_panek4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer912;
	bSizer912 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer143;
	bSizer143 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323 = new wxStaticText( m_panel10, wxID_ANY, _("Initial course"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323->Wrap( -1 );
	bSizer143->Add( m_staticText323, 0, wxALL, 5 );

	m_Approach_OR = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer143->Add( m_Approach_OR, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText333 = new wxStaticText( m_panel10, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333->Wrap( -1 );
	bSizer143->Add( m_staticText333, 0, wxALL, 5 );


	bSizer132->Add( bSizer143, 0, 0, 5 );

	wxBoxSizer* bSizer1412;
	bSizer1412 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3212 = new wxStaticText( m_panel10, wxID_ANY, _("Leg Space             "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3212->Wrap( -1 );
	bSizer1412->Add( m_staticText3212, 0, wxALL, 5 );

	wxString m_dx_ORChoices[] = { _("3"), _("2"), _("1"), _("0.5"), _("0.2"), _("0.1") };
	int m_dx_ORNChoices = sizeof( m_dx_ORChoices ) / sizeof( wxString );
	m_dx_OR = new wxChoice( m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_dx_ORNChoices, m_dx_ORChoices, 0 );
	m_dx_OR->SetSelection( 0 );
	bSizer1412->Add( m_dx_OR, 0, wxALL, 5 );

	m_staticText3312 = new wxStaticText( m_panel10, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3312->Wrap( -1 );
	bSizer1412->Add( m_staticText3312, 0, wxALL, 5 );


	bSizer132->Add( bSizer1412, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14121;
	bSizer14121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32121 = new wxStaticText( m_panel10, wxID_ANY, _("Number of Legs  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32121->Wrap( -1 );
	bSizer14121->Add( m_staticText32121, 0, wxALL, 5 );

	m_NLegs_OR = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14121->Add( m_NLegs_OR, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33121 = new wxStaticText( m_panel10, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33121->Wrap( -1 );
	bSizer14121->Add( m_staticText33121, 0, wxALL, 5 );


	bSizer132->Add( bSizer14121, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer141111123;
	bSizer141111123 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111123 = new wxStaticText( m_panel10, wxID_ANY, _("Search Speed       "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111123->Wrap( -1 );
	bSizer141111123->Add( m_staticText321111123, 0, wxALL, 5 );

	m_Speed_OR = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141111123->Add( m_Speed_OR, 0, wxALL, 5 );

	m_staticText331111113 = new wxStaticText( m_panel10, wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111113->Wrap( -1 );
	bSizer141111123->Add( m_staticText331111113, 0, wxALL, 5 );


	bSizer132->Add( bSizer141111123, 0, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer132->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	wxStaticBoxSizer* sbSizer714;
	sbSizer714 = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox4 = new wxCheckBox( sbSizer714->GetStaticBox(), wxID_ANY, _("Waypoint names "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox4->SetValue(true);
	bSizer69->Add( m_checkBox4, 0, wxALL, 5 );

	m_checkBoxIcons4 = new wxCheckBox( sbSizer714->GetStaticBox(), wxID_ANY, _("Icons "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons4->SetValue(true);
	bSizer69->Add( m_checkBoxIcons4, 0, wxALL, 5 );


	sbSizer714->Add( bSizer69, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7112;
	bSizer7112 = new wxBoxSizer( wxHORIZONTAL );

	m_button311112 = new wxButton( sbSizer714->GetStaticBox(), wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button311112->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_button311112->SetBackgroundColour( wxColour( 240, 240, 240 ) );

	bSizer7112->Add( m_button311112, 0, wxALL, 5 );


	sbSizer714->Add( bSizer7112, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer132->Add( sbSizer714, 0, wxEXPAND, 5 );


	bSizer912->Add( bSizer132, 0, wxEXPAND, 5 );


	m_panel10->SetSizer( bSizer912 );
	m_panel10->Layout();
	bSizer912->Fit( m_panel10 );
	bSizer6->Add( m_panel10, 0, wxALL|wxEXPAND, 5 );

	m_bitmap_oil_rig = new wxStaticBitmap( m_panek4, wxID_ANY, wxNullBitmap);
	bSizer6->Add( m_bitmap_oil_rig, 0, wxALL, 5 );


	m_panek4->SetSizer( bSizer6 );
	m_panek4->Layout();
	bSizer6->Fit( m_panek4 );
	m_notebook1->AddPage( m_panek4, _("Oil Rig (Quadrant Single)"), false );

	bSframe->Add( m_notebook1, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_wxNotebook234 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel11 = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerDDMMSS;
	sbSizerDDMMSS = new wxStaticBoxSizer( new wxStaticBox( m_panel11, wxID_ANY, _("DATUM / CSP (Start of Search)") ), wxVERTICAL );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1431;
	bSizer1431 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231 = new wxStaticText( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, _("Latitude  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231->Wrap( -1 );
	bSizer1431->Add( m_staticText3231, 0, wxALL, 5 );

	m_Lat1 = new wxTextCtrl( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_Lat1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText3331 = new wxStaticText( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331->Wrap( -1 );
	bSizer1431->Add( m_staticText3331, 0, wxALL, 5 );


	bSizer1321->Add( bSizer1431, 0, 0, 5 );

	wxBoxSizer* bSizer14311;
	bSizer14311 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32311 = new wxStaticText( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, _("Longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32311->Wrap( -1 );
	bSizer14311->Add( m_staticText32311, 0, wxALL, 5 );

	m_Lon1 = new wxTextCtrl( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_Lon1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33311 = new wxStaticText( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33311->Wrap( -1 );
	bSizer14311->Add( m_staticText33311, 0, wxALL, 5 );


	bSizer1321->Add( bSizer14311, 0, 0, 5 );


	bSizer60->Add( bSizer1321, 0, 0, 5 );

	m_panel14 = new wxPanel( sbSizerDDMMSS->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	m_button11 = new wxButton( m_panel14, wxID_ANY, _("Ship"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button11->SetToolTip( _("Copy ship position (GPS fix required)") );

	bSizer61->Add( m_button11, 0, wxALL, 5 );

	m_Cursor = new wxButton( m_panel14, wxID_ANY, _("Cursor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( m_Cursor, 0, wxALL, 5 );


	m_panel14->SetSizer( bSizer61 );
	m_panel14->Layout();
	bSizer61->Fit( m_panel14 );
	bSizer60->Add( m_panel14, 0, wxEXPAND | wxALL, 5 );


	sbSizerDDMMSS->Add( bSizer60, 1, wxEXPAND, 5 );


	bSizer40->Add( sbSizerDDMMSS, 0, wxEXPAND, 5 );


	m_panel11->SetSizer( bSizer40 );
	m_panel11->Layout();
	bSizer40->Fit( m_panel11 );
	m_wxNotebook234->AddPage( m_panel11, _("D.ddd"), false );
	m_panelDegreesMinutes = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4011;
	bSizer4011 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer721;
	sbSizer721 = new wxStaticBoxSizer( new wxStaticBox( m_panelDegreesMinutes, wxID_ANY, _("DATUM / CSP (Start of Search)") ), wxVERTICAL );

	wxBoxSizer* bSizer132121;
	bSizer132121 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer143131;
	bSizer143131 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323131 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323131->Wrap( -1 );
	bSizer143131->Add( m_staticText323131, 0, wxALL, 5 );

	m_Lat1_d1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143131->Add( m_Lat1_d1, 0, wxALL, 5 );

	m_staticText333131 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText333131->Wrap( -1 );
	bSizer143131->Add( m_staticText333131, 0, wxALL, 5 );

	m_Lat1_m1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143131->Add( m_Lat1_m1, 0, wxALL|wxEXPAND, 5 );

	m_staticText11431 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11431->Wrap( -1 );
	bSizer143131->Add( m_staticText11431, 0, wxALL, 5 );

	wxString m_Lat1_NS1Choices[] = { _("N"), _("S") };
	int m_Lat1_NS1NChoices = sizeof( m_Lat1_NS1Choices ) / sizeof( wxString );
	m_Lat1_NS1 = new wxChoice( sbSizer721->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NS1NChoices, m_Lat1_NS1Choices, 0 );
	m_Lat1_NS1->SetSelection( 0 );
	bSizer143131->Add( m_Lat1_NS1, 0, wxALL, 5 );


	bSizer132121->Add( bSizer143131, 0, 0, 5 );

	wxBoxSizer* bSizer1431121;
	bSizer1431121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3231121, 0, wxALL, 5 );

	m_Lon1_d1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_d1, 0, wxALL, 5 );

	m_staticText3331121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3331121, 0, wxALL, 5 );

	m_Lon1_m1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_m1, 0, wxALL|wxEXPAND, 5 );

	m_staticText114121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText114121->Wrap( -1 );
	bSizer1431121->Add( m_staticText114121, 0, wxALL, 5 );

	wxString m_Lon1_EW1Choices[] = { _("E"), _("W") };
	int m_Lon1_EW1NChoices = sizeof( m_Lon1_EW1Choices ) / sizeof( wxString );
	m_Lon1_EW1 = new wxChoice( sbSizer721->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EW1NChoices, m_Lon1_EW1Choices, 0 );
	m_Lon1_EW1->SetSelection( 0 );
	bSizer1431121->Add( m_Lon1_EW1, 0, wxALL, 5 );


	bSizer132121->Add( bSizer1431121, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	sbSizer721->Add( bSizer132121, 0, 0, 5 );


	bSizer4011->Add( sbSizer721, 0, 0, 5 );

	wxBoxSizer* bSizer4811;
	bSizer4811 = new wxBoxSizer( wxHORIZONTAL );

	m_button811 = new wxButton( m_panelDegreesMinutes, wxID_ANY, _("Convert to Degree"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4811->Add( m_button811, 0, wxALL, 5 );


	bSizer4011->Add( bSizer4811, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panelDegreesMinutes->SetSizer( bSizer4011 );
	m_panelDegreesMinutes->Layout();
	bSizer4011->Fit( m_panelDegreesMinutes );
	m_wxNotebook234->AddPage( m_panelDegreesMinutes, _("D MM.mmm"), true );
	m_panel15 = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer401;
	bSizer401 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer72;
	sbSizer72 = new wxStaticBoxSizer( new wxStaticBox( m_panel15, wxID_ANY, _("DATUM / CSP (Start of Search)") ), wxVERTICAL );

	wxBoxSizer* bSizer13212;
	bSizer13212 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14313;
	bSizer14313 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32313 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32313->Wrap( -1 );
	bSizer14313->Add( m_staticText32313, 0, wxALL, 5 );

	m_Lat1_d = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer14313->Add( m_Lat1_d, 0, wxALL, 5 );

	m_staticText33313 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText33313->Wrap( -1 );
	bSizer14313->Add( m_staticText33313, 0, wxALL, 5 );

	m_Lat1_m = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer14313->Add( m_Lat1_m, 0, wxALL, 5 );

	m_staticText1143 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1143->Wrap( -1 );
	bSizer14313->Add( m_staticText1143, 0, wxALL, 5 );

	m_Lat1_s = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer14313->Add( m_Lat1_s, 0, wxALL, 5 );

	m_staticText1153 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1153->Wrap( -1 );
	bSizer14313->Add( m_staticText1153, 0, wxALL, 5 );

	wxString m_Lat1_NSChoices[] = { _("N"), _("S") };
	int m_Lat1_NSNChoices = sizeof( m_Lat1_NSChoices ) / sizeof( wxString );
	m_Lat1_NS = new wxChoice( sbSizer72->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NSNChoices, m_Lat1_NSChoices, 0 );
	m_Lat1_NS->SetSelection( 0 );
	bSizer14313->Add( m_Lat1_NS, 0, wxALL, 5 );


	bSizer13212->Add( bSizer14313, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer143112;
	bSizer143112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323112 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323112->Wrap( -1 );
	bSizer143112->Add( m_staticText323112, 0, wxALL, 5 );

	m_Lon1_d = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143112->Add( m_Lon1_d, 0, wxALL, 5 );

	m_staticText333112 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, degString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333112->Wrap( -1 );
	bSizer143112->Add( m_staticText333112, 0, wxALL, 5 );

	m_Lon1_m = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143112->Add( m_Lon1_m, 0, wxALL, 5 );

	m_staticText11412 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11412->Wrap( -1 );
	bSizer143112->Add( m_staticText11412, 0, wxALL, 5 );

	m_Lon1_s = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143112->Add( m_Lon1_s, 0, wxALL, 5 );

	m_staticText11512 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11512->Wrap( -1 );
	bSizer143112->Add( m_staticText11512, 0, wxALL, 5 );

	wxString m_Lon1_EWChoices[] = { _("E"), _("W") };
	int m_Lon1_EWNChoices = sizeof( m_Lon1_EWChoices ) / sizeof( wxString );
	m_Lon1_EW = new wxChoice( sbSizer72->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EWNChoices, m_Lon1_EWChoices, 0 );
	m_Lon1_EW->SetSelection( 0 );
	bSizer143112->Add( m_Lon1_EW, 0, wxALL, 5 );


	bSizer13212->Add( bSizer143112, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	sbSizer72->Add( bSizer13212, 0, wxEXPAND, 5 );


	bSizer401->Add( sbSizer72, 0, 0, 5 );

	wxBoxSizer* bSizer481;
	bSizer481 = new wxBoxSizer( wxHORIZONTAL );

	m_button81 = new wxButton( m_panel15, wxID_ANY, _("Convert to Degree"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer481->Add( m_button81, 0, wxALL, 5 );


	bSizer401->Add( bSizer481, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel15->SetSizer( bSizer401 );
	m_panel15->Layout();
	bSizer401->Fit( m_panel15 );
	m_wxNotebook234->AddPage( m_panel15, _("D MM SS"), false );

	bSizer35->Add( m_wxNotebook234, 0, wxALL|wxEXPAND, 5 );

	m_panel111 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer91111;
	bSizer91111 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer13111;
	bSizer13111 = new wxBoxSizer( wxVERTICAL );

	m_button9 = new wxButton( m_panel111, wxID_ANY, _("Calculate"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13111->Add( m_button9, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText32211 = new wxStaticText(m_panel111, wxID_ANY, _("Search Distance / Time"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText32211->Wrap(-1);
	bSizer13111->Add(m_staticText32211, 0, wxALL, 5);

	wxBoxSizer* bSizer14211;
	bSizer14211 = new wxBoxSizer(wxHORIZONTAL);

	m_Distance = new wxTextCtrl(m_panel111, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer14211->Add(m_Distance, 0, wxALL, 5);

	m_staticText33211 = new wxStaticText(m_panel111, wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText33211->Wrap(-1);
	bSizer14211->Add(m_staticText33211, 0, wxALL, 5);


	bSizer13111->Add(bSizer14211, 0, 0, 5);

	wxBoxSizer* bSizer141121;
	bSizer141121 = new wxBoxSizer(wxHORIZONTAL);

	m_Time = new wxTextCtrl(m_panel111, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer141121->Add(m_Time, 0, wxALL, 5);

	m_staticText331121 = new wxStaticText(m_panel111, wxID_ANY, _("hr"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText331121->Wrap(-1);
	bSizer141121->Add(m_staticText331121, 0, wxALL, 5);


	bSizer13111->Add(bSizer141121, 0, 0, 5);


	bSizer91111->Add(bSizer13111, 0, wxEXPAND, 5);


	bSizer31->Add(bSizer91111, 1, wxEXPAND, 5);


	m_panel111->SetSizer(bSizer31);
	m_panel111->Layout();
	bSizer31->Fit(m_panel111);
	bSizer35->Add(m_panel111, 0, wxEXPAND | wxALL, 5);


	bSframe->Add( bSizer35, 0, 0, 5 );


	this->SetSizer( bSframe );
	this->Layout();
	bSframe->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_button3111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_Nship->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectNumberShips ), NULL, this );
	m_NPortStbd->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectPortStarboard ), NULL, this );
	m_button31111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button311111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_VSMethod->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectVectorMethod ), NULL, this );
	m_button311112->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_wxNotebook234->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_wxNotebook234->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( DlgDef::OnNoteBookFit ), NULL, this );
	m_panel11->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lat1->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lon1->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnShip ), NULL, this );
	m_Cursor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCursorSelect ), NULL, this );
	m_button811->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button81->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_button3111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_Nship->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectNumberShips ), NULL, this );
	m_NPortStbd->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectPortStarboard ), NULL, this );
	m_button31111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button311111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_VSMethod->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectVectorMethod ), NULL, this );
	m_button311112->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_wxNotebook234->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_wxNotebook234->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( DlgDef::OnNoteBookFit ), NULL, this );
	m_panel11->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lat1->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lon1->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnShip ), NULL, this );
	m_Cursor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCursorSelect ), NULL, this );
	m_button811->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button81->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );

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

	m_staticText17 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer3->Add( m_staticText17, 0, wxALL, 5 );

	m_sOpacity = new wxSlider( sbSizer4->GetStaticBox(), wxID_ANY, 50, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer3->Add( m_sOpacity, 0, wxALL|wxEXPAND, 5 );


	sbSizer4->Add( fgSizer3, 1, wxEXPAND, 5 );


	bSizer2->Add( sbSizer4, 0, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("CPU saving settings") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_CaptureShip = new wxCheckBox( sbSizer3->GetStaticBox(), wxID_ANY, _("Capture Ship Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_CaptureShip->SetValue(true);
	m_CaptureShip->SetToolTip( _("Leave ticked, so you can use ship's position") );

	bSizer3->Add( m_CaptureShip, 0, wxALL, 5 );

	m_CaptureCursor = new wxCheckBox( sbSizer3->GetStaticBox(), wxID_ANY, _("Capture Cursor Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_CaptureCursor->SetValue(true);
	m_CaptureCursor->SetToolTip( _("Leave ticked, so that you can use cursor position.") );

	bSizer3->Add( m_CaptureCursor, 0, wxALL, 5 );


	fgSizer4->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );


	fgSizer4->Add( bSizer4, 1, wxEXPAND, 5 );


	sbSizer3->Add( fgSizer4, 1, wxEXPAND, 5 );


	bSizer2->Add( sbSizer3, 0, wxALL|wxEXPAND, 5 );


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
	bSizer1->Fit( this );

	this->Centre( wxBOTH );
}

CfgDlgDef::~CfgDlgDef()
{
}

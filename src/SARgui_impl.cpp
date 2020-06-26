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

#include "SARgui_impl.h"

CfgDlg::CfgDlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : CfgDlgDef( parent, id, title, pos, size, style )
{
}

Dlg::Dlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DlgDef( parent, id, title, pos, size, style )
{
	this->Fit();

	initialize_bitmaps();
    dbg=false; //for debug output set to true

    //initialise images
    
    //m_bitmap_trackln->SetBitmap(* _img_trackln);
	m_bitmap_trackln1->SetBitmap(*_img_trackln1);
    m_bitmap_sector->SetBitmap(* _img_sector);
    m_bitmap_exp_sq->SetBitmap(* _img_exp_sq);
	m_bitmap_oil_rig->SetBitmap(* _img_oil_rig);
	m_notebook1->SetSelection(0);
	m_wxNotebook234->SetSelection(0);
	m_Nship->SetSelection(0);
	m_NPortStbd->SetSelection(0);
}

void Dlg::OnConvertToDegree( wxCommandEvent& event )
{
	ConvertToDegree();
}

void Dlg::ConvertToDegree()
{
	double DDLat;
	double DDLon;

	double DDLat1;
	double DDLon1;

	double MMLat;
	double MMLon;

	double SSLat;
	double SSLon;

	int DDlat1;
	int DDlon1;

	int MMlat1;
	int MMlon1;

	int NS;
	int EW;

	double MMlat0;
	double MMlon0;

	double MMlat2;
	double MMlon2;

	double SSlat1;
	double SSlon1;

	double value;

	wxString s;
	wxString s1;
	wxString m1;
	wxString d1;

	//set cell values to 0 if they are empty. This ensures conversion goes ok.
	double test_value;
	if (!this->m_Lat1_d->GetValue().ToDouble(&test_value)) { m_Lat1_d->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_m->GetValue().ToDouble(&test_value)) { m_Lat1_m->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_s->GetValue().ToDouble(&test_value)) { m_Lat1_s->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lon1_d->GetValue().ToDouble(&test_value)) { m_Lon1_d->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_m->GetValue().ToDouble(&test_value)) { m_Lon1_m->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_s->GetValue().ToDouble(&test_value)) { m_Lon1_s->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lat1_d1->GetValue().ToDouble(&test_value)) { m_Lat1_d1->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_m1->GetValue().ToDouble(&test_value)) { m_Lat1_m1->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lon1_d1->GetValue().ToDouble(&test_value)) { m_Lon1_d1->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_m1->GetValue().ToDouble(&test_value)) { m_Lon1_m1->SetValue(wxString::Format(wxT("%i"), 0)); }


	switch (m_wxNotebook234->GetSelection()) {
	case 0:
		s = m_Lat1->GetValue();
		s.ToDouble(&value);
		DDLat = value;
		s = m_Lon1->GetValue();
		s.ToDouble(&value);
		DDLon = value;

		DDlat1 = abs(int(DDLat));
		DDlon1 = abs(int(DDLon));

		// set the ddmm page

		m_Lat1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlat1));
		m_Lon1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlon1));

		MMlat0 = (fabs(DDLat) - double(DDlat1)) * 60;
		MMlon0 = (fabs(DDLon) - double(DDlon1)) * 60;

		m_Lat1_m1->SetValue(wxString::Format(_T("%.6f"), MMlat0));
		m_Lon1_m1->SetValue(wxString::Format(_T("%.6f"), MMlon0));

		if (DDLat > 0) {
			m_Lat1_NS1->SetSelection(0);
			m_Lat1_NS->SetSelection(0);
		}
		else {
			m_Lat1_NS1->SetSelection(1);
			m_Lat1_NS->SetSelection(1);
		}

		if (DDLon > 0) {
			m_Lon1_EW1->SetSelection(0);
			m_Lon1_EW->SetSelection(0);
		}
		else {
			m_Lon1_EW1->SetSelection(1);
			m_Lon1_EW->SetSelection(1);
		}

		// set the ddmmss page			

		m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlat1)));
		m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlon1)));

		m_Lat1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlat0)));
		m_Lon1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlon0)));

		MMlat2 = int(MMlat0);
		MMlon2 = int(MMlon0);

		SSlat1 = (MMlat0 - MMlat2) * 60;
		SSlon1 = (MMlon0 - MMlon2) * 60;

		m_Lat1_s->SetValue(wxString::Format(_T("%.6f"), SSlat1));
		m_Lon1_s->SetValue(wxString::Format(_T("%.6f"), SSlon1));

		if (m_Nship->GetCurrentSelection() == 0) {			
			m_bitmap_trackln1->SetBitmap(*_img_trackln1);						
		}else	
		if (m_Nship->GetCurrentSelection() == 1) {
			m_bitmap_trackln1->SetBitmap(*_img_trackln_both);
		}

		break;

	case 1:

		d1 = m_Lat1_d1->GetValue();
		d1.ToDouble(&value);
		DDLat = value;
		d1 = m_Lon1_d1->GetValue();
		d1.ToDouble(&value);
		DDLon = value;

		m1 = m_Lat1_m1->GetValue();
		m1.ToDouble(&value);
		MMLat = value;
		m1 = m_Lon1_m1->GetValue();
		m1.ToDouble(&value);
		MMLon = value;

		DDLat1 = DDLat + (MMLat / 60);
		DDLon1 = DDLon + (MMLon / 60);

		//wxMessageBox(wxString::Format(_T("%f"), DDLat1));
		//wxMessageBox(wxString::Format(_T("%f"), DDLon1));

		NS = m_Lat1_NS1->GetSelection();
		if (NS == 1) {
			DDLat1 *= -1;
		}
		EW = m_Lon1_EW1->GetSelection();
		if (EW == 1) {
			DDLon1 *= -1;
		}

		// set the dd.dddd page

		m_Lat1->SetValue(wxString::Format(_T("%.6f"), DDLat1));
		m_Lon1->SetValue(wxString::Format(_T("%.6f"), DDLon1));

		MMlat1 = int(MMLat);
		MMlon1 = int(MMLon);

		// set the ddmmss page
		if (m_Lat1_NS1->GetSelection() == 0) {
			m_Lat1_NS->SetSelection(0);
		}
		else {
			m_Lat1_NS->SetSelection(1);
		}
		if (m_Lon1_EW1->GetSelection() == 0) {
			m_Lon1_EW->SetSelection(0);
		}
		else {
			m_Lon1_EW->SetSelection(1);
		}


		m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDLat1)));
		m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDLon1)));


		m_Lat1_m->SetValue(wxString::Format(_T("%i"), MMlat1));
		m_Lon1_m->SetValue(wxString::Format(_T("%i"), MMlon1));

		MMlat2 = (MMLat - double(MMlat1)) * 60;
		MMlon2 = (MMLon - double(MMlon1)) * 60;

		m_Lat1_s->SetValue(wxString::Format(_T("%.6f"), MMlat2));
		m_Lon1_s->SetValue(wxString::Format(_T("%.6f"), MMlon2));

		m_wxNotebook234->SetSelection(0);
		m_Lat1->SetFocus();

		break;
	case 2:
		d1 = m_Lat1_d->GetValue();
		d1.ToDouble(&value);
		DDLat = value;
		d1 = m_Lon1_d->GetValue();
		d1.ToDouble(&value);
		DDLon = value;

		m1 = m_Lat1_m->GetValue();
		m1.ToDouble(&value);
		MMLat = value;
		m1 = m_Lon1_m->GetValue();
		m1.ToDouble(&value);
		MMLon = value;

		s1 = m_Lat1_s->GetValue();
		s1.ToDouble(&value);
		SSLat = value;
		s1 = m_Lon1_s->GetValue();
		s1.ToDouble(&value);
		SSLon = value;

		DDLat1 = DDLat + MMLat / 60 + SSLat / 3600;
		DDLon1 = DDLon + MMLon / 60 + SSLon / 3600;

		NS = m_Lat1_NS->GetSelection();
		if (NS == 1) {
			DDLat1 *= -1;
			m_Lat1_NS1->SetSelection(1);
			m_Lat1_NS->SetSelection(1);
		}
		else {
			m_Lat1_NS1->SetSelection(0);
			m_Lat1_NS->SetSelection(0);
		}

		EW = m_Lon1_EW->GetSelection();
		if (EW == 1) {
			DDLon1 *= -1;
			m_Lon1_EW1->SetSelection(1);
			m_Lon1_EW->SetSelection(1);
		}
		else {
			m_Lon1_EW1->SetSelection(0);
			m_Lon1_EW->SetSelection(0);
		}

		// set dd.ddd page

		m_Lat1->SetValue(wxString::Format(_T("%.6f"), DDLat1));
		m_Lon1->SetValue(wxString::Format(_T("%.6f"), DDLon1));

		// set ddmm page

		m_Lat1_d1->SetValue(wxString::Format(_T("%i"), abs((int)DDLat1)));
		m_Lon1_d1->SetValue(wxString::Format(_T("%i"), abs((int)DDLon1)));


		DDLat1 = MMLat + SSLat / 60;
		DDLon1 = MMLon + SSLon / 60;

		m_Lat1_m1->SetValue(wxString::Format(_T("%.6f"), DDLat1));
		m_Lon1_m1->SetValue(wxString::Format(_T("%.6f"), DDLon1));

		m_wxNotebook234->SetSelection(0);
		m_Lat1->SetFocus();

		break;
	}

}


void Dlg::OnNoteBookFit( wxCommandEvent& event )
{

    this->m_panel11->Layout();
    this->m_wxNotebook234->InvalidateBestSize();
    this->Fit();
    if (dbg) printf("Resizing window \n");
}
void Dlg::OnFit( wxCommandEvent& event )
{
    this->m_wxNotebook234->InvalidateBestSize();
    this->m_panel11->Fit();
    this->m_panel11->Layout();
    this->Fit();
    this->Layout();
    if (dbg) printf("Resizing window \n");
}

void Dlg::Addpoint(TiXmlElement* Route, wxString ptlat, wxString ptlon, wxString ptname, wxString ptsym, wxString pttype){
//add point
	TiXmlElement * RoutePoint = new TiXmlElement( "rtept" );
    RoutePoint->SetAttribute("lat", ptlat.mb_str());
    RoutePoint->SetAttribute("lon", ptlon.mb_str());


    TiXmlElement * Name = new TiXmlElement( "name" );
    TiXmlText * text = new TiXmlText( ptname.mb_str() );
    RoutePoint->LinkEndChild( Name );
    Name->LinkEndChild( text );

    TiXmlElement * Symbol = new TiXmlElement( "sym" );
    TiXmlText * text1 = new TiXmlText( ptsym.mb_str() );
    RoutePoint->LinkEndChild( Symbol );
    Symbol->LinkEndChild( text1 );

    TiXmlElement * Type = new TiXmlElement( "type" );
    TiXmlText * text2 = new TiXmlText( pttype.mb_str() );
    RoutePoint->LinkEndChild( Type );
    Type->LinkEndChild( text2 );
    Route->LinkEndChild( RoutePoint );
//done adding point
}

void Dlg::OnCalculate(wxCommandEvent& event) {
	
	int nb = 0;
	nb = m_notebook1->GetSelection();
	//wxMessageBox(wxString::Format("%i", nb));
	switch (nb) {
		case 0: {
			Calculate(event, false, 1);
			break;
		}
		case 1: {
			Calculate(event, false, 2);
			break;
		}
		case 2: {
			Calculate(event, false, 3);
			break;
		}
		case 3: {
			Calculate(event, false, 4);
			break;
		}
	}	
}

void Dlg::OnPSGPX( wxCommandEvent& event )
{
   // wxMessageBox(_("Function not yet implemented :p")) ;
   Calculate(event, true, 1);
}

void Dlg::OnESGPX( wxCommandEvent& event )
{
    //wxMessageBox(_("Function not yet implemented :p")) ;
    Calculate(event, true, 2);
}

void Dlg::OnSSGPX( wxCommandEvent& event )
{
   // wxMessageBox(_("Function not yet implemented :p")) ;
   Calculate(event, true, 3);
}

void Dlg::OnORGPX( wxCommandEvent& event )
{
   // wxMessageBox(_("Function not yet implemented :p")) ;
   Calculate(event, true, 4);
}


void Dlg::Calculate(wxCommandEvent& event, bool write_file, int Pattern)
/*
1 Parallel Search
2 Expanding Square
3 Sector search
4 Oil Rig
*/
{
	wxString defaultFileName;
	int df = this->m_NPortStbd->GetCurrentSelection();
	switch (Pattern) {
	case 1: {
		int ch = this->m_Nship->GetCurrentSelection();
		wxString chText;
		if (ch == 0) {
			if (df == 0) {
				defaultFileName = "PS-1";
			}
			else if (df == 1) {
				defaultFileName = "PS-2";
				m_NPortStbd->SetSelection(1);
				m_bitmap_trackln1->SetBitmap(*_img_trackln1_port);
			}
		}else
		if (ch == 1) {
			chText = "PS-AB";
			defaultFileName = chText;			
		}			
		break;
	}
	case 2: {  // ok as is
		defaultFileName = "SS";
		break;
	}
	case 3: {
		int vh = this->m_Ncycles->GetCurrentSelection();
		wxString chText;
		if (vh == 0) {
			defaultFileName = "VS";
		}
		else
		if(vh == 1){
			defaultFileName = "VS-12";
		}
		break;
	}
	case 4: { // ok as is		
		defaultFileName = "QS";
		break;
	}

	default: {
		defaultFileName = wxEmptyString;
		break;
	}

	}

	bool error_occurred = false;
	bool user_canceled = false;
	// double dist, fwdAz, revAz;
	

	ConvertToDegree();

	double lat1, lon1;
	if (!this->m_Lat1->GetValue().ToDouble(&lat1)) { lat1 = 0.0; }
	if (!this->m_Lon1->GetValue().ToDouble(&lon1)) { lon1 = 0.0; }

	if (lat1 == 0 && lon1 == 0) {
		wxMessageBox(_("No Datum Point has been entered"), _("Error"));
		return;
	}
	//if (error_occurred) wxMessageBox(_T("error in conversion of input coordinates"));

	if (this->m_Nship->GetCurrentSelection() == 0 && Pattern == 1) wxMessageBox(_("For this search pattern the Start Point entered is the CSP"), _("Start Position"), wxCENTRE);

	//error_occurred=false;
	wxString s;
	if (write_file) {
		wxFileDialog dlg(this, _("Export SAR track GPX file as"), wxEmptyString, defaultFileName, _T("GPX files (*.gpx)|*.gpx|All files (*.*)|*.*"), wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
		if (dlg.ShowModal() == wxID_CANCEL)
			user_canceled = true;     // the user changed idea...
	   //dlg.ShowModal();
		s = dlg.GetPath();		
		//  std::cout<<s<< std::endl;
		if (!user_canceled && s.IsEmpty()) { error_occurred = true; if (dbg) printf("Empty Path\n"); }
	}

	//Validate input ranges
	if (!error_occurred && !user_canceled) {
		if (std::abs(lat1) > 90) { error_occurred = true; }
		if (std::abs(lon1) > 180) { error_occurred = true; }
		if (error_occurred) wxMessageBox(_("error in input range validation"));
	}

	//Start GPX
	TiXmlDocument doc;
	TiXmlDeclaration* decl = new TiXmlDeclaration("1.0", "utf-8", "");
	doc.LinkEndChild(decl);
	TiXmlElement * root = new TiXmlElement("gpx");
	TiXmlElement * Route = new TiXmlElement("rte");
	TiXmlElement * Route2 = new TiXmlElement("rte");
	TiXmlElement * RouteName = new TiXmlElement("name");
	TiXmlElement * RouteName2 = new TiXmlElement("name");
	TiXmlElement * Extensions = new TiXmlElement("extensions");
	TiXmlElement * Extensions2 = new TiXmlElement("extensions");
	TiXmlElement * gpxx = new TiXmlElement("gpxx:RouteExtension");
	TiXmlElement * gpxxDisplayColor = new TiXmlElement("gpxx:DisplayColor");
	TiXmlText * textDisplayColor;

	//for second cycles:

	TiXmlElement * gpxx2 = new TiXmlElement("gpxx:RouteExtension");
	TiXmlElement * gpxxDisplayColor2 = new TiXmlElement("gpxx:DisplayColor");
	TiXmlText * textDisplayColor2;

	TiXmlElement * Speed;
	TiXmlText * textSpeed;
	wxString mySpeed;	

	bool writeWaypointNames = true;
	bool showMarkIcons = true;

	TiXmlText * text4 = new TiXmlText("");
	switch (Pattern) {
		case 1:
		{		
			wxString AB = "";
			int sl = m_Nship->GetCurrentSelection();
			if (sl == 1) {				
				AB = "-1";
			}
			
			wxString text = "PS";
			text = defaultFileName + AB;
			text4 = new TiXmlText(text);			
			writeWaypointNames = this->m_checkBox1->GetValue();
			showMarkIcons = this->m_checkBoxIcons1->GetValue();
			break;
		}
		case 2:
		{
			text4 = new TiXmlText(defaultFileName);
			writeWaypointNames = this->m_checkBox2->GetValue();
			showMarkIcons = this->m_checkBoxIcons2->GetValue();
			break;
		}
		case 3:
		{			
			int nc = this->m_Ncycles->GetCurrentSelection();
			if (nc == 0) {
				text4 = new TiXmlText(defaultFileName);
			}
			else if (nc == 1) {
				text4 = new TiXmlText(defaultFileName + "-1");
			}
			
			writeWaypointNames = this->m_checkBox3->GetValue();
			showMarkIcons = this->m_checkBoxIcons3->GetValue();
			break;
		}
		case 4:
		{
			text4 = new TiXmlText(defaultFileName);
			writeWaypointNames = this->m_checkBox4->GetValue();
			showMarkIcons = this->m_checkBoxIcons4->GetValue();
			break;
		}
	}

	if (write_file && !user_canceled && !error_occurred) {
		doc.LinkEndChild(root);
		root->SetAttribute("version", "1.1");
		root->SetAttribute("creator", "Route_pi by SaltyPaws/Rasbats");
		root->SetAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
		root->SetAttribute("xmlns:gpxx", "http://www.garmin.com/xmlschemas/GpxExtensions/v3");
		root->SetAttribute("xsi:schemaLocation", "http://www.topografix.com/GPX/1/1 http://www.topografix.com/GPX/1/1/gpx.xsd");
		root->SetAttribute("xmlns:opencpn", "http://www.opencpn.org");
		Route->LinkEndChild(RouteName);
		RouteName->LinkEndChild(text4);

		TiXmlElement * StartN = new TiXmlElement("opencpn:start");
		TiXmlText * text5 = new TiXmlText("Datum");
		Extensions->LinkEndChild(StartN);
		StartN->LinkEndChild(text5);

		TiXmlElement * EndN = new TiXmlElement("opencpn:end");
		TiXmlText * text6 = new TiXmlText("End of grid");
		Extensions->LinkEndChild(EndN);
		EndN->LinkEndChild(text6);

		

		switch (Pattern) {
			case 1:
			{
				mySpeed = m_Speed_PS->GetValue();
				textSpeed = new TiXmlText(mySpeed);
				break;
			}
			case 2:
			{
				mySpeed = m_Speed_ES->GetValue();
				textSpeed = new TiXmlText(mySpeed);
				break;
			}
			case 3:
			{
				mySpeed = m_Speed_SS->GetValue();
				textSpeed = new TiXmlText(mySpeed);
				break;
			}
			case 4:
			{
				mySpeed = m_Speed_OR->GetValue();
				textSpeed = new TiXmlText(mySpeed);
				break;
			}
			default:
			{
				mySpeed = "0";
				textSpeed = new TiXmlText(mySpeed);
			}
		}	
		
		
	}

	//Calculate GCL
   // double step_size=dist/100;

	if (error_occurred) {
		wxLogMessage(_("Error occurred, aborting SAR calc!"));
		//wxMessageBox(_("Route interval > Distance, 0 or negative") );
	}

	//Call SAR routine here
	/*
	1 Parallel Search
	2 Expanding Square
	3 Sector search
	4 Oil Rig
	*/

	double approach = 0;
	double leg_distancex = 0;
	double leg_distancey = 0;
	double leg_distancez = 0;
	double nlegs = 0;
	double speed = 0;
	double SAR_distance = 0;
	bool First_Ship = false;
	double startSARdist;
	double startCse;
	int i = 0;
	int n = 0;
	int nleg = 0;
	wxString wpt_title = wxT("");
	wxString wpt_mark = wxT("");

	int shipsAvailable = 1;

	if (!user_canceled && !error_occurred) {
		switch (Pattern) {
		case 1:
		{						
			if (dbg) cout << "Parallel Search\n";
			//Expanding Parallel search Start
			
			if (!this->m_Approach_PS->GetValue().ToDouble(&approach)) { approach = 0.0; } //approach course
			if (!this->m_dx_PS->GetValue().ToDouble(&leg_distancex)) { leg_distancex = 1.0; } //leg distance
			if (!this->m_dy_PS->GetValue().ToDouble(&leg_distancey)) { leg_distancey = 1.0; } //leg distance
			if (!this->m_n_PS->GetValue().ToDouble(&nlegs)) { nlegs = 1.0; } //number of legs
			if (!this->m_Speed_PS->GetValue().ToDouble(&speed)) { speed = 5.0; } // search velocity
			if (this->m_Nship->GetCurrentSelection()) First_Ship = true;//S=1


			if (leg_distancex < 0.1) { leg_distancex = 1.0; }//check for negative or small values
			if (nlegs < 0.1) { nlegs = 1.0; }//check for negative or small values
			/*pattern
			*datum
			*Start of search
				datum +approach+90-->-dx/2
			*Leg1
			start+approach-->distance
			pt1+approach+90-->width
			*leg2
			pt2+approach+180-->distance
			pt3+approach-90-->width
			leg3
			pt4+approach-->distance
			pt5+approach+90-->width
			*/

			double latDatum, lonDatum;
			latDatum = lat1;
			lonDatum = lon1;

			double lati, loni, ESheading, ESdistance;
			double initDistance, initHdg;
			double latTemp, lonTemp, distTemp, hdgTemp;

			shipsAvailable = this->m_Nship->GetSelection(); // for readability

			if (shipsAvailable != 0){				

				initHdg = approach + 180;

				initDistance = leg_distancex / 2;
				hdgTemp = initHdg + 90.0;
				distTemp = leg_distancey * 2.5;

				destRhumb(latDatum, lonDatum, -initHdg, initDistance, &latTemp, &lonTemp);

			}
							
			switch (shipsAvailable) {
			case 0: // IAMSAR single unit
			{
				
				if (nlegs < 3) nlegs = 3;
				if (write_file){
					Speed = new TiXmlElement("opencpn:planned_speed");
					Extensions->LinkEndChild(Speed);
					Speed->LinkEndChild(textSpeed);

					textDisplayColor = new TiXmlText("Blue");

				

					gpxxDisplayColor->LinkEndChild(textDisplayColor);
					gpxx->LinkEndChild(gpxxDisplayColor);
					Extensions->LinkEndChild(gpxx);
					Route->LinkEndChild(Extensions);
				}
				
				//wxMessageBox(wxString::Format("%f", ESdistance));
				
				//destRhumb(latTemp, lonTemp, -hdgTemp, distTemp, &lati, &loni);

				//distRhumb(latDatum, lonDatum, lati, loni, &startSARdist, &startCse);
				
				if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lat1), wxString::Format(wxT("%f"), lon1), _T("CSP"), _T("diamond"), _T("WPT")); }
				
				int ps = this->m_NPortStbd->GetCurrentSelection();
							

				//lat1 = lati;
				//lon1 = loni;

				for (int x = 1; x <= nlegs; x++) { //Loop over the number of legs
					for (int y = 0; y <= 1; y++) { //Loop over the tracks
						if (y == 0) {
							if (x % 2 != 0) {
								ESheading = approach;
								wpt_title = wxT("");
								if (writeWaypointNames) {
									wpt_title << wxT("") << x << wxT(".") << y + 2 << wxT("");
								}
							}
							else {
								ESheading = approach + 180.0;
								wpt_title = wxT("");
								if (writeWaypointNames) {									
									wpt_title << wxT("") << x << wxT(".") << y + 2 << wxT("");
								}
							}
							ESdistance = leg_distancex;
						}
						else {
							if (x == nlegs) break;
							wpt_title = wxT("");
							if (writeWaypointNames) {
								wpt_title << wxT("") << x + 1 << wxT(".") << y << wxT("");
							}
							ESdistance = leg_distancey;
							if (ps == 1) {
								ESheading = approach - 90.0;
							}else
							ESheading = approach + 90.0;

						}

						n++;

						destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
						SAR_distance += ESdistance;

						if (showMarkIcons) {
							wpt_mark = _T("diamond");
						}
						else {
							wpt_mark = _T("Marks-Blank");
						}
						
						if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }

						lat1 = lati;
						lon1 = loni;
					}

				}
										
				if (write_file) root->LinkEndChild(Route2);

				this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance));
				this->m_Time->SetValue(wxString::Format(wxT("%g"), (SAR_distance / speed) ));
				break;
			}
			// end single unit - parallel-iamsar
			case 1:  // two units - iamsar
			{
				if (write_file){
					Speed = new TiXmlElement("opencpn:planned_speed");
					Extensions->LinkEndChild(Speed);
					Speed->LinkEndChild(textSpeed);
				
					textDisplayColor = new TiXmlText("Green");

					gpxxDisplayColor->LinkEndChild(textDisplayColor);
					gpxx->LinkEndChild(gpxxDisplayColor);
					Extensions->LinkEndChild(gpxx);
					Route->LinkEndChild(Extensions);
				}
				
				for (i = 1; i <= 2; i++) {

					

					if (i == 1) {
						if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), latDatum), wxString::Format(wxT("%f"), lonDatum), _T("Datum"), _T("diamond"), _T("WPT")); }
						ESheading = approach - 90.0;
						ESdistance = leg_distancey / 2;
						destRhumb(latTemp, lonTemp, -ESheading, ESdistance, &lati, &loni);
						distRhumb(latDatum, lonDatum, lati, loni, &startSARdist, &startCse);
						SAR_distance += startSARdist;
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title << wxT("") << 1 << wxT(".") << 1 << wxT("");
						}
						if (showMarkIcons) {
							wpt_mark = _T("diamond");
						}
						else {
							wpt_mark = _T("Marks-Blank");
						}
						if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
						lat1 = lati;
						lon1 = loni;
					}

					//calculate start position

					if (i == 2) {

						if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), latDatum), wxString::Format(wxT("%f"), lonDatum), _T(""), _T(""), _T("WPT")); }
						ESheading = approach + 90.0;
						ESdistance = leg_distancey / 2;
						destRhumb(latTemp, lonTemp, -ESheading, ESdistance, &lati, &loni);
						distRhumb(latDatum, lonDatum, lati, loni, &startSARdist, &startCse);
						SAR_distance += startSARdist;
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title << wxT("") << 1 << wxT(".") << 1 << wxT("");
						}

						if (showMarkIcons) {
							wpt_mark = _T("diamond");
						}
						else {
							wpt_mark = _T("Marks-Blank");
						}
						if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
						lat1 = lati;
						lon1 = loni;
					}
					wpt_title << wxT("");
					wpt_title << wxT("Start ") << i << wxT(".") << 1 << wxT("");
					
					for (int x = 1; x <= nlegs; x++) { //Loop over the number of legs
						for (int y = 0; y <= 1; y++) { //Loop over the tracks
							if (y == 0) {
								if (x % 2 != 0) {
									ESheading = approach;
									wpt_title = wxT("");
									if (writeWaypointNames) {
										wpt_title << wxT("") << x << wxT(".") << y + 2 << wxT("");
									}
								}
								else {
									ESheading = approach + 180.0;
									wpt_title = wxT("");
									if (writeWaypointNames) {
										wpt_title << wxT("") << x << wxT(".") << y + 2 << wxT("");
									}
								}
								ESdistance = leg_distancex;
							}
							else {
								if (x == nlegs) break;
								wpt_title = wxT("");
								if (writeWaypointNames) {
									wpt_title << wxT("") << x + 1 << wxT(".") << y << wxT("");
								}
								ESdistance = leg_distancey;

								if (i == 1)ESheading = approach - 90.0;
								if (i == 2)ESheading = approach + 90.0;
							}

							n++;

							destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
							SAR_distance += ESdistance;

							if (showMarkIcons) {
								wpt_mark = _T("diamond");
							}
							else {
								wpt_mark = _T("Marks-Blank");
							}

							if (i == 1) {
								if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
							}
							else {
								if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
							}

							lat1 = lati;
							lon1 = loni;
						}

					}

					if (i == 1) {
						if (write_file){
							wxString routeNameText = "PS";
							routeNameText = defaultFileName + "-2";
							text4 = new TiXmlText(routeNameText);
							RouteName2->LinkEndChild(text4);
							Route2->LinkEndChild(RouteName2);

							Speed = new TiXmlElement("opencpn:planned_speed");
							Extensions2->LinkEndChild(Speed);
							Speed->LinkEndChild(textSpeed);

							textDisplayColor2 = new TiXmlText("Red");

							gpxxDisplayColor2->LinkEndChild(textDisplayColor2);
							gpxx2->LinkEndChild(gpxxDisplayColor2);
							Extensions2->LinkEndChild(gpxx2);
							Route2->LinkEndChild(Extensions2);
						}
					}

				}
				if (write_file) root->LinkEndChild(Route2);
				this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance / 2));
				this->m_Time->SetValue(wxString::Format(wxT("%g"), (SAR_distance / speed) / 2));
				break;
			}

			// end two units both on same GPX
			}
			//Expanding Parallel search End
			break;
		}
		case 2:            // Note the colon, not a semicolon
		{
			if (write_file){
				Speed = new TiXmlElement("opencpn:planned_speed");
				Extensions->LinkEndChild(Speed);
				Speed->LinkEndChild(textSpeed);

				textDisplayColor = new TiXmlText("Blue");
			
				gpxxDisplayColor->LinkEndChild(textDisplayColor);
				gpxx->LinkEndChild(gpxxDisplayColor);
				Extensions->LinkEndChild(gpxx);
				Route->LinkEndChild(Extensions);
			}
			//Expanding Square Start
			if (dbg) cout << "Expanding Square\n";
			double approach = 0.0;
			double leg_distancex = 0.0;
			double legs = 0.0;
			double speed = 0.0;
			double SAR_distance = 0;
			if (!this->m_Approach_ES->GetValue().ToDouble(&approach)) { approach = 0.0; } //approach course

			int ss = this->m_dx_ES->GetCurrentSelection();
			this->m_dx_ES->GetString(ss).ToDouble(&leg_distancex); //leg distance

			if (!this->m_n_ES->GetValue().ToDouble(&legs)) { legs = 1.0; } //number of legs
			if (!this->m_Speed_ES->GetValue().ToDouble(&speed)) { speed = 5.0; } // search velocity
			if (leg_distancex < 0.1) { leg_distancex = 1.0; }//check for negative or small values
			if (legs < 4) { legs = 4; }

			/* Pattern
			Datum
			square 1
			1 Datum+distance-->approach
			2 pt1+distance-->approach+90
			3 pt2+distancex2--approach+180
			4 pt3+distancex2-->approach+270
			5 pt4+distancex3-->approach
			6 pt5+distancex3-->approach+90
			7 pt6+distancex4-->approach+180
			*/

			//add  datum			
			if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lat1), wxString::Format(wxT("%f"), lon1), _T("Datum"), _T("diamond"), _T("WPT")); }
			
			int multiplier = 0;
			double lati, loni;
			int x = 1;
			int count = 0;
			for (x = 1; x <= legs; x++) { //Loop over the number of search squares
				count++;
				double ESdistance = leg_distancex;
				double ESheading = 0;
				wxString wpt_title;

				switch (count) {
				case 1: {ESheading = -approach; multiplier++; break; }
				case 2: {ESheading = -approach - 90.0; break; }
				case 3: {ESheading = -approach - 180.0; multiplier++; break; }
				case 4: {
					ESheading = -approach - 270.0;
					count = 0;
					break;
				}
				}
				ESdistance = leg_distancex * multiplier;

				n++;
				wpt_title = wxT("");
				
				if (writeWaypointNames) {
					wpt_title << wxT("E") << x;
				}
				
				destRhumb(lat1, lon1, ESheading, ESdistance, &lati, &loni);
				SAR_distance += ESdistance;

				if (showMarkIcons) {
					wpt_mark = _T("diamond");
				}
				else {
					wpt_mark = _T("Marks-Blank");
				}

				if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
				lat1 = lati;
				lon1 = loni;



			}
			this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance));
			this->m_Time->SetValue(wxString::Format(wxT("%g"), SAR_distance / speed));

		}
		//Expanding Square End
		break;
		case 3: // Vector search start
		{
			if (this->m_VSMethod->GetCurrentSelection() == 0) {
				if (write_file){
					Speed = new TiXmlElement("opencpn:planned_speed");
					Extensions->LinkEndChild(Speed);
					Speed->LinkEndChild(textSpeed);

					textDisplayColor = new TiXmlText("Red");

					gpxxDisplayColor->LinkEndChild(textDisplayColor);
					gpxx->LinkEndChild(gpxxDisplayColor);
					Extensions->LinkEndChild(gpxx);
					Route->LinkEndChild(Extensions);
				}
				//Sector search start
				cout << "Sector search\n";

				if (dbg) cout << "Sector Square\n";
				double approach = 0;
				double leg_distancex = 0;
				double speed = 0;
				double SAR_distance = 0;
				bool two_cycles = false;
				if (!this->m_Approach_SS->GetValue().ToDouble(&approach)) { approach = 0.0; } //approach course

				int ss = this->m_dx_SS->GetCurrentSelection();
				this->m_dx_SS->GetString(ss).ToDouble(&leg_distancex); //leg distance
				
				if (!this->m_Speed_SS->GetValue().ToDouble(&speed)) { speed = 5.0; } // search velocity
				if (leg_distancex < 0.1) { leg_distancex = 1.0; }//check for negative or small values
				if (this->m_Ncycles->GetCurrentSelection()) two_cycles = true;//S=1

				/* Pattern
				Datum
				Go Downwind for 1 mile,
				*** alter 120 degrees to starboard, this course for 1 mile
				then
				Alter to starboard 120 degrees and go on this course for 2 miles going through datum
				then
				Alter to starboard 120 degrees for 1 mile
				then
				Alter to starboard 120 degrees for 2 miles going through datum

				then
				Alter to starboard 120 degrees for 1 mile
				then
				Alter 120 degrees to starboard for 1 mile back to datum
				then go down the Blue track as follows
				Alter 30 degrees to starboard for 1 mile
				then go to the *** above and do the same again
				*/
				//add  datum


				double lati, loni;
				double latDatum, lonDatum;
				double ESheading = -approach;
				double legStretch;
				bool checkBoxTicked = true;

				destRhumb(lat1, lon1, ESheading - 180, leg_distancex, &lati, &loni);
				latDatum = lat1;
				lonDatum = lon1;

				// Add the CSP to the pattern
				if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), _T("CSP"), _T("circle"), _T("WPT")); }
				if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lat1), wxString::Format(wxT("%f"), lon1), _T("Datum"), _T("diamond"), _T("WPT")); }


				lat1 = lati;
				lon1 = loni;

				for (int x = 1; x <= ((two_cycles) ? 16 : 6); x++) { //Loop over the legs

					wxString wpt_title;
					wxString wpt_mark;

					if (x % 2 == 0) {

						legStretch = leg_distancex; // the default

					}
					else if (x < 12) {
						if (x == 7 || x == 11) {
							legStretch = leg_distancex;
						}
						else {
							legStretch = leg_distancex * 2;
						}
					}

					if (x % 2 == 0 && x > 11) {
						if (x == 16) {
							legStretch = leg_distancex;
						}
						else {
							legStretch = leg_distancex * 2; // the default						
						}

					}
					else if (x > 11) {

						legStretch = leg_distancex;
					}

					if (x < 7) {
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title << wxT("") << 1 << wxT(".") << x << wxT("");
						}
					}

					if (x == 7 || x == 9) {
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title = _T("Datum");
						}
					}


					if (x > 9) {
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title << wxT("") << 2 << wxT(".") << x - 9 << wxT("");
						}
					}

					if (x == 16) {
						wpt_title = wxT("");
						if (writeWaypointNames) {
							wpt_title = _T("Datum");
						}
					}

					n++;

					// The key to not putting in a waypoint when second route is included in the gpx.
					//*********************************************************
					if (x != 9) destRhumb(lat1, lon1, ESheading, legStretch, &lati, &loni);
					//*********************************************************
					//
					SAR_distance += legStretch;
					//
					//
					ESheading -= 120.0;

					nleg++;
					if (showMarkIcons) {
						if (x > 8) {
							wpt_mark = _T("Sea-Height-Blue");
						}
						else {
							wpt_mark = _T("Sea-Height-Red");
						}
					}
					else {
						wpt_mark = "Marks-Blank";
					}

					if (x > 9) {
						if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
					}
					else {
						if (write_file && (x < 8)) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
					}

					if (x == 9) {
						if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), latDatum), wxString::Format(wxT("%f"), lonDatum), wpt_title, "", _T("WPT")); }
						lati = latDatum;
						loni = lonDatum;
						ESheading -= 30;
					}

					if (x == 8 && !two_cycles) {
						if (write_file) root->LinkEndChild(Route);
					}

					nleg++;
					if (write_file) {
						if (x == 8 && two_cycles) {
							if (write_file){
								wxString routeNameText = "";
								text4 = new TiXmlText(defaultFileName + routeNameText);
								if (this->m_Ncycles->GetCurrentSelection() == 1) {
									routeNameText = "-2";
									text4 = new TiXmlText(defaultFileName + routeNameText);
								}
								
								RouteName2->LinkEndChild(text4);
								Route2->LinkEndChild(RouteName2);

								Speed = new TiXmlElement("opencpn:planned_speed");
								Extensions2->LinkEndChild(Speed);
								Speed->LinkEndChild(textSpeed);

								textDisplayColor2 = new TiXmlText("Blue");

								gpxxDisplayColor2->LinkEndChild(textDisplayColor2);
								gpxx2->LinkEndChild(gpxxDisplayColor2);
								Extensions2->LinkEndChild(gpxx2);

								Route2->LinkEndChild(Extensions2);
							}

						}
						else {

							lat1 = lati;
							lon1 = loni;
						}
					}
				}

				if (two_cycles) SAR_distance -= leg_distancex * 3;

				if (write_file) root->LinkEndChild(Route2);
				this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance));
				this->m_Time->SetValue(wxString::Format(wxT("%g"), SAR_distance / speed));
				//IAMSAR Sector search end
			} else 
			// IAMSAR Sector search end

			// USCG Sector search start
			if (this->m_VSMethod->GetCurrentSelection() == 1) {
					if (write_file){
						Speed = new TiXmlElement("opencpn:planned_speed");
						Extensions->LinkEndChild(Speed);
						Speed->LinkEndChild(textSpeed);

						textDisplayColor = new TiXmlText("Red");

						gpxxDisplayColor->LinkEndChild(textDisplayColor);
						gpxx->LinkEndChild(gpxxDisplayColor);
						Extensions->LinkEndChild(gpxx);
						Route->LinkEndChild(Extensions);
					}
					//USCG Sector search start
					cout << "Sector search\n";

					if (dbg) cout << "Sector Square\n";
					double approach = 0;
					double leg_distancex = 0;
					double speed = 0;
					double SAR_distance = 0;
					bool two_cycles = false;
					if (!this->m_Approach_SS->GetValue().ToDouble(&approach)) { approach = 0.0; } //approach course

					int ss = this->m_dx_SS->GetCurrentSelection();
					this->m_dx_SS->GetString(ss).ToDouble(&leg_distancex); //leg distance

					if (!this->m_Speed_SS->GetValue().ToDouble(&speed)) { speed = 5.0; } // search velocity
					if (leg_distancex < 0.1) { leg_distancex = 1.0; }//check for negative or small values
					if (this->m_Ncycles->GetCurrentSelection()) two_cycles = true;//S=1

					/* Pattern
					Datum
					Go Downwind for 1 mile,
					*** alter 120 degrees to starboard, this course for 1 mile
					then
					Alter to starboard 120 degrees and go on this course for 2 miles going through datum
					then
					Alter to starboard 120 degrees for 1 mile
					then
					Alter to starboard 120 degrees for 2 miles going through datum

					then
					Alter to starboard 120 degrees for 1 mile
					then
					Alter 120 degrees to starboard for 1 mile back to datum
					then go down the Blue track as follows
					Alter 30 degrees to starboard for 1 mile
					then go to the *** above and do the same again
					*/
					//add  datum


					double lati, loni;
					double latDatum, lonDatum;
					double ESheading = -approach;
					double legStretch;
					bool checkBoxTicked = true;

					latDatum = lat1;
					lonDatum = lon1;

					

					// Add the CSP to the pattern
					//if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), _T("CSP"), _T("circle"), _T("WPT")); }
					if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lat1), wxString::Format(wxT("%f"), lon1), _T("Datum"), _T("diamond"), _T("WPT")); }

					for (int x = 1; x <= ((two_cycles) ? 16 : 8); x++) { //Loop over the legs

						wxString wpt_title;
						wxString wpt_mark;

						if (x % 2 == 0) {

							legStretch = leg_distancex; // the default

						}
						else if (x < 12) {
							if (x == 1 || x == 7 || x == 11) {
								legStretch = leg_distancex;
							}
							else {
								legStretch = leg_distancex * 2;
							}
						}

						if (x % 2 == 0 && x > 11) {
							if (x == 16) {
								legStretch = leg_distancex;
							}
							else {
								legStretch = leg_distancex * 2; // the default						
							}

						}
						else if (x > 11) {

							legStretch = leg_distancex;
						}

						// now the names of the waypoints

						if (x < 7) {
							wpt_title = wxT("");
							if (writeWaypointNames) {
								wpt_title << wxT("") << 1 << wxT(".") << x << wxT("");
							}
						}

						if (x == 7 || x == 9) {
							wpt_title = wxT("");
							if (writeWaypointNames) {
								wpt_title = _T("Datum");
							}
						}


						if (x > 9) {
							wpt_title = wxT("");
							if (writeWaypointNames) {
								wpt_title << wxT("") << 2 << wxT(".") << x - 9 << wxT("");
							}
						}

						if (x == 16) {
							wpt_title = wxT("");
							if (writeWaypointNames) {
								wpt_title = _T("Datum");
							}
						}

						n++;

						// The key to not putting in a waypoint when second route is included in the gpx.
						//*********************************************************
						if (x != 9) {
							destRhumb(lat1, lon1, ESheading, legStretch, &lati, &loni);							
							SAR_distance += legStretch;

							if (x == 8) {
								SAR_distance -= legStretch;
							}

						}
						if (x == 9) {
							lat1 = latDatum;
							lon1 = lonDatum;
						}
						//*********************************************************
						//						
						//
						//
						ESheading -= 120.0;

						nleg++;

						if (showMarkIcons) {
							if (x > 8) {
								wpt_mark = _T("Sea-Height-Blue");
							}
							else {
								wpt_mark = _T("Sea-Height-Red");
							}
						}
						else {
							wpt_mark = "Marks-Blank";
						}

						if (x > 9) {
							if (x == 16) {
								if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), latDatum), wxString::Format(wxT("%f"), lonDatum), wpt_title, "Marks-Blank", _T("WPT")); }
							}
							else {
							if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
							}
						}
						else {							
								if (write_file && (x < 8)) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }							
						}

						if (x == 9) {						
							if (write_file) { Addpoint(Route2, wxString::Format(wxT("%f"), latDatum), wxString::Format(wxT("%f"), lonDatum), wpt_title, "Marks-Blank", _T("WPT")); }
							lati = latDatum;
							loni = lonDatum;
							ESheading -= 30;
						}

						if (x == 8 && !two_cycles) {
							if (write_file) root->LinkEndChild(Route);
						}

						nleg++;
						
							if (x == 8 && two_cycles) {
								if (write_file) {
								wxString routeNameText = "";
								text4 = new TiXmlText(defaultFileName + routeNameText);
								if (this->m_Ncycles->GetCurrentSelection() == 1) {
									routeNameText = "-2";
									text4 = new TiXmlText(defaultFileName + routeNameText);
								}
								
								RouteName2->LinkEndChild(text4);
								Route2->LinkEndChild(RouteName2);

								Speed = new TiXmlElement("opencpn:planned_speed");
								Extensions2->LinkEndChild(Speed);
								Speed->LinkEndChild(textSpeed);

								textDisplayColor2 = new TiXmlText("Blue");

								gpxxDisplayColor2->LinkEndChild(textDisplayColor2);
								gpxx2->LinkEndChild(gpxxDisplayColor2);
								Extensions2->LinkEndChild(gpxx2);

								Route2->LinkEndChild(Extensions2);
								}

							}
							else {

								lat1 = lati;
								lon1 = loni;
							}
						
					}					

					if (write_file)root->LinkEndChild(Route2);
					this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance));
					this->m_Time->SetValue(wxString::Format(wxT("%g"), SAR_distance / speed));
					//IAMSAR Sector search end				

			}
			//USCG Sector search end
			break;
		}
		case 4:            // Note the colon, not a semicolon
		{
			// Oil rig search start
			if (write_file){
				Speed = new TiXmlElement("opencpn:planned_speed");
				Extensions->LinkEndChild(Speed);
				Speed->LinkEndChild(textSpeed);			
			
				textDisplayColor = new TiXmlText("Blue");
			
				gpxxDisplayColor->LinkEndChild(textDisplayColor);
				gpxx->LinkEndChild(gpxxDisplayColor);
				Extensions->LinkEndChild(gpxx);
				Route->LinkEndChild(Extensions);
			}
			//Oil Rig begin
			if (dbg) cout << "Oil Rig\n";
			double approach = 0;
			double leg_distancex = 0;
			double nlegs = 0;
			double speed = 0;
			double SAR_distance = 0;
			if (!this->m_Approach_OR->GetValue().ToDouble(&approach)) { approach = 0.0; } //approach course

			int ss = this->m_dx_OR->GetCurrentSelection();
			this->m_dx_OR->GetString(ss).ToDouble(&leg_distancex); //leg distance

			if (!this->m_NLegs_OR->GetValue().ToDouble(&nlegs)) { nlegs = 1.0; } //number of legs
			if (!this->m_Speed_SS->GetValue().ToDouble(&speed)) { speed = 5.0; } // search velocity
			if (leg_distancex < 0.1) { leg_distancex = 1.0; }//check for negative or small values
			if (nlegs < 0.1) { nlegs = 1.0; }//check for negative or small values
			/*pattern
			datum
			*Leg1
			datum+approach-->dx
			pt1+approach+90-->dx
			*leg2
			pt2+approach-->dx
			pt3+approach-90-->dx*3
			leg3
			pt4+approach-->dx
			pt5+approach+90-->dx*7
			*/

			//add  datum
			if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lat1), wxString::Format(wxT("%f"), lon1), _T("Datum"), _T("diamond"), _T("WPT")); }
			int n = 0;
			int multiplier = 1;
			double lati, loni, ESheading, ESdistance;
			bool sign_flipper = false;
			wxString wpt_title;
			for (int x = 1; x <= nlegs; x++) { //Loop over the number of legs
				for (int y = 1; y <= 2; y++) { //Loop over the tracks
					if (y == 1) {
						ESheading = approach;
						ESdistance = leg_distancex;
					}
					else {
						ESdistance = leg_distancex * multiplier;
						multiplier += 2;
						if (sign_flipper) {
							ESheading = approach - 90;
							sign_flipper = false;
						}
						else {
							ESheading = approach + 90;
							sign_flipper = true;
						}
					}
					n++;
					wpt_title = wxT("");
					if (writeWaypointNames) {
						wpt_title << wxT("") << x << wxT(".") << y << wxT("");
					}
					destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
					SAR_distance += ESdistance;

					if (showMarkIcons) {
						wpt_mark = _T("diamond");
					}
					else {
						wpt_mark = _T("Marks-Blank");
					}

					if (write_file) { Addpoint(Route, wxString::Format(wxT("%f"), lati), wxString::Format(wxT("%f"), loni), wpt_title, wpt_mark, _T("WPT")); }
					lat1 = lati;
					lon1 = loni;
				}
			}
			this->m_Distance->SetValue(wxString::Format(wxT("%g"), SAR_distance));
			this->m_Time->SetValue(wxString::Format(wxT("%g"), SAR_distance / speed));
			//Oil Rig end
			break;
		}
		default:
		{            // Note the colon, not a semicolon
			cout << "Error, bad input, quitting\n";
			break;
		}
		}

		if (write_file) {
			if (Pattern != 3 || Pattern != 1) {
				root->LinkEndChild(Route);
			}
			// check if string ends with .gpx or .GPX
			if (!s.EndsWith(_T(".gpx"))) {
				s = s + _T(".gpx");
			}
			wxCharBuffer buffer = s.ToUTF8();
			if (dbg) std::cout << buffer.data() << std::endl;
			doc.SaveFile(buffer.data());
		}
		//} //end of if no error occurred

		if (error_occurred) {
			wxLogMessage(_("Error in calculation. Please check input!"));
			wxMessageBox(_("Error in calculation. Please check input!"));
		}
	}
	if (this->m_Nship->GetCurrentSelection() == 1) {		
		this->m_bitmap_trackln1->SetBitmap(*_img_trackln_both);
		this->m_NPortStbd->SetSelection(0);
	}
	else {
		this->m_NPortStbd->SetSelection(0);
		this->m_bitmap_trackln1->SetBitmap(*_img_trackln1);
	}
	this->Fit();
}


void Dlg::OnSelectNumberShips(wxCommandEvent& event) {

	int s = this->m_Nship->GetCurrentSelection();

	switch (s) {
		case 0:
		{
			m_bitmap_trackln1->SetBitmap(*_img_trackln1);			
			m_staticTextPortStbd->Show();
			m_NPortStbd->Show();			
			m_NPortStbd->SetSelection(0);
			break;
		}
		case 1: 
		{
			m_bitmap_trackln1->SetBitmap(*_img_trackln_both);			
			m_staticTextPortStbd->Hide();
			m_NPortStbd->Hide();
			break;
		}
	}
	
	this->Fit(); // refresh
	RequestRefresh(this); // refresh main window
}

void Dlg::OnSelectVectorMethod(wxCommandEvent& event) {

	int s = this->m_VSMethod->GetCurrentSelection();

	switch (s) {
	case 0:
	{
		m_bitmap_sector->SetBitmap(*_img_sector);
		break;
	}
	case 1:
	{
		m_bitmap_sector->SetBitmap(*_img_sector_uscg);
		break;
	}

	default:
	{
		break;
	}
	}
}

void Dlg::OnSelectPortStarboard(wxCommandEvent& event) {

	int s = this->m_NPortStbd->GetCurrentSelection();

	
		switch (s) {
			case 0:
			{
				m_bitmap_trackln1->SetBitmap(*_img_trackln1);
				break;
			}
			case 1:
			{
				m_bitmap_trackln1->SetBitmap(*_img_trackln1_port);
				break;
			}

			default:
			{
				break;
			}
		}
	
}

void Dlg::OnClose(wxCloseEvent& event){

	plugin->OnSARDialogClose();
}

void Dlg::OnCursor(wxCommandEvent& event ){OnCursor();}
void Dlg::OnCursor(void){
    this->m_Lat1->SetValue(wxString::Format(wxT("%.6f"), plugin->GetCursorLat() ));
    this->m_Lon1->SetValue(wxString::Format(wxT("%.6f"), plugin->GetCursorLon() ));

	setDDMM(); // Copies the lat.lon to the DDMM page

	m_wxNotebook234->SetSelection(0);
	m_Lat1->SetFocus();
}

void Dlg::OnShip(wxCommandEvent& event ){OnShip();}
void Dlg::OnShip(void){
    this->m_Lat1->SetValue(wxString::Format(wxT("%.6f"), plugin->GetShipLat() ));
    this->m_Lon1->SetValue(wxString::Format(wxT("%.6f"), plugin->GetShipLon() ));

	setDDMM(); // Copies the lat.lon to the DDMM page

	m_wxNotebook234->SetSelection(0);
	m_Lat1->SetFocus();
}


void Dlg::key_shortcut(wxKeyEvent& event) {
    // of course, it doesn't have to be the control key. You can use others:
    // http://docs.wxwidgets.org/stable/wx_wxkeyevent.html
    if(event.GetModifiers() == wxMOD_CONTROL) {
        switch(event.GetKeyCode()) {
            case 'S': // can return the upper ASCII value of a key
                // do whatever you like for a Ctrl+G event here!
                //wxMessageBox(_("CTRL+G") );
                OnCursor();
                break;/*
            case WXK_LEFT: // we also have special keycodes for non-ascii values.
                // get a full list of special keycodes here:
                // http://docs.wxwidgets.org/stable/wx_keycodes.html
                wxMessageBox(_("CTRL+Left") );
                break;*/
            default: // do nothing
                break;
        }
    }
    event.Skip();
}
/*
void Dlg::mouse_shortcut(wxMouseEvent& event) {
    // of course, it doesn't have to be the control key. You can use others:
    // http://docs.wxwidgets.org/stable/wx_wxkeyevent.html
    if(event.LeftDown() == true) {
        wxMessageBox(_("CTRL+G") );
        OnCursor();
    }
    //else{
        event.Skip();
    //}

}*/


void Dlg::OnCursorSelect(wxCommandEvent& event){

	m_wxNotebook234->SetSelection(0);
	m_Lat1->SetFocus();
	m_Lat1->Clear();
	m_Lon1->Clear();

    wxMessageBox(_("To copy the cursor location place the cursor on the chart \n     ...and press <CTRL>+S") );
   // wxMessageBox(_("While this button is selected, or the cursor is in the lattitude or longitude box, you can copy the cursor location with <CTRL>+S") );
    event.Skip();
}

void Dlg::getDatum(double m_lat, double m_lon) {

	wxString myLat = wxString::Format("%f", m_lat);
	wxString myLon = wxString::Format("%f", m_lon);

	m_Lat1->SetValue(myLat);
	m_Lon1->SetValue(myLon);

	setDDMM();

	m_wxNotebook234->SetSelection(0);
	m_Lat1->SetFocus();
	
}


void Dlg::setDDMM() {  // after entering dd.dddd from cursor, menu, lat

	double DDLat;
	double DDLon;

	int DDlat1;
	int DDlon1;

	double MMlat0;
	double MMlon0;

	double MMlat2;
	double MMlon2;

	double SSlat1;
	double SSlon1;

	double value;

	wxString s;
	wxString s1;
	wxString m1;
	wxString d1;

	//set cell values to 0 if they are empty. This ensures conversion goes ok.
	double test_value;
	if (!this->m_Lat1_d->GetValue().ToDouble(&test_value)) { m_Lat1_d->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_m->GetValue().ToDouble(&test_value)) { m_Lat1_m->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_s->GetValue().ToDouble(&test_value)) { m_Lat1_s->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lon1_d->GetValue().ToDouble(&test_value)) { m_Lon1_d->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_m->GetValue().ToDouble(&test_value)) { m_Lon1_m->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_s->GetValue().ToDouble(&test_value)) { m_Lon1_s->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lat1_d1->GetValue().ToDouble(&test_value)) { m_Lat1_d1->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lat1_m1->GetValue().ToDouble(&test_value)) { m_Lat1_m1->SetValue(wxString::Format(wxT("%i"), 0)); }

	if (!this->m_Lon1_d1->GetValue().ToDouble(&test_value)) { m_Lon1_d1->SetValue(wxString::Format(wxT("%i"), 0)); }
	if (!this->m_Lon1_m1->GetValue().ToDouble(&test_value)) { m_Lon1_m1->SetValue(wxString::Format(wxT("%i"), 0)); }

	s = m_Lat1->GetValue();
	s.ToDouble(&value);
	DDLat = value;
	s = m_Lon1->GetValue();
	s.ToDouble(&value);
	DDLon = value;

	DDlat1 = abs(int(DDLat));
	DDlon1 = abs(int(DDLon));

	// set the ddmm page

	m_Lat1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlat1));
	m_Lon1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlon1));

	MMlat0 = (fabs(DDLat) - double(DDlat1)) * 60;
	MMlon0 = (fabs(DDLon) - double(DDlon1)) * 60;

	m_Lat1_m1->SetValue(wxString::Format(_T("%.6f"), MMlat0));
	m_Lon1_m1->SetValue(wxString::Format(_T("%.6f"), MMlon0));

	if (DDLat > 0) {
		m_Lat1_NS1->SetSelection(0);
		m_Lat1_NS->SetSelection(0);
	}
	else {
		m_Lat1_NS1->SetSelection(1);
		m_Lat1_NS->SetSelection(1);
	}

	if (DDLon > 0) {
		m_Lon1_EW1->SetSelection(0);
		m_Lon1_EW->SetSelection(0);
	}
	else {
		m_Lon1_EW1->SetSelection(1);
		m_Lon1_EW->SetSelection(1);
	}

	// set the ddmmss page			

	m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlat1)));
	m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlon1)));

	m_Lat1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlat0)));
	m_Lon1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlon0)));

	MMlat2 = int(MMlat0);
	MMlon2 = int(MMlon0);

	SSlat1 = (MMlat0 - MMlat2) * 60;
	SSlon1 = (MMlon0 - MMlon2) * 60;

	m_Lat1_s->SetValue(wxString::Format(_T("%.6f"), SSlat1));
	m_Lon1_s->SetValue(wxString::Format(_T("%.6f"), SSlon1));


}




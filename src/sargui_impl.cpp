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

#include "sargui_impl.h"

CfgDlg::CfgDlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : CfgDlgDef( parent, id, title, pos, size, style )
{
}

Dlg::Dlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DlgDef( parent, id, title, pos, size, style )
{
}

void Dlg::OnRecordToggle( wxCommandEvent& event )
{
      wxMessageBox(_("Sorry, this function is not yet implemented..."));
      event.Skip();
}

void Dlg::OnSurveySelection( wxCommandEvent& event )
{
      plugin->SetActiveSurvey(m_chSurvey->GetStringSelection());
      //m_gdSoundings->SetTable(
      event.Skip();
}

void Dlg::OnNewSurvey( wxCommandEvent& event )
{
      wxString answer = wxGetTextFromUser(_("Enter a name for the new survey:"));
      if (answer != wxEmptyString)
      {
            plugin->CreateSurvey(answer);
            plugin->SetActiveSurvey(answer);
            plugin->FillSurveyDropdown();
      }
      event.Skip();
}

void Dlg::OnDeleteSurvey( wxCommandEvent& event )
{
      int answer = wxMessageBox(wxString::Format(_("Are you sure you want to permanently delete the survey %s?"), m_chSurvey->GetStringSelection().c_str()), _("Confirm"),
                            wxYES_NO | wxCANCEL, this);
      if (answer == wxYES)
      {
            plugin->DeleteSurvey(plugin->GetActiveSurveyId());
            plugin->FillSurveyDropdown();
      }
      event.Skip();
}

void Dlg::OnSurveyProperties( wxCommandEvent& event )
{
      wxMessageBox(_("Sorry, this function is not yet implemented..."));
      event.Skip();
}

void Dlg::OnZoomToSurvey( wxCommandEvent& event )
{
      wxMessageBox(_("Sorry, this function is not yet implemented..."));
      event.Skip();
}

void Dlg::OnMergeSurvey( wxCommandEvent& event )
{
      wxMessageBox(_("Sorry, this function is not yet implemented..."));
      event.Skip();
}

void Dlg::OnImportSurvey( wxCommandEvent& event )
{
      wxFileDialog dlg(this, _("Select survey data file"), wxEmptyString, wxEmptyString, _T("HydroMagic files (*.gmp)|*.gmp|CSV files (*.csv)|*.csv"), wxFD_OPEN);
      dlg.ShowModal();
      if (dlg.GetPath() != wxEmptyString)
            plugin->ImportHydromagic(dlg.GetPath());
      event.Skip();
}

void Dlg::OnExportSurvey( wxCommandEvent& event )
{
      wxFileDialog dlg(this, _("Export survey as"), wxEmptyString, wxEmptyString, _T("HydroMagic files (*.gmp)|*.gmp|CSV files (*.csv)|*.csv"), wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
      dlg.ShowModal();
      if (dlg.GetPath() != wxEmptyString)
            plugin->ExportHydromagic(plugin->GetActiveSurveyId(), dlg.GetPath());
      event.Skip();
}

void Dlg::OnSurveyCancelClick( wxCommandEvent& event ) { event.Skip(); }

void Dlg::OnSurveyOkClick( wxCommandEvent& event ) { event.Skip(); }

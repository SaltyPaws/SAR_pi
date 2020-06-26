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

#ifndef _CALCULATOR_PI_H_
#define _CALCULATOR_PI_H_

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
  #include <wx/glcanvas.h>
#endif //precompiled headers

#include <wx/fileconf.h>

#include "ocpn_plugin.h" //Required for OCPN plugin functions
#include "SARgui_impl.h"

#include "version.h"

#define     MY_API_VERSION_MAJOR    1
#define     MY_API_VERSION_MINOR    16

class Dlg;

//----------------------------------------------------------------------------------------------------------
//    The PlugIn Class Definition
//----------------------------------------------------------------------------------------------------------

#define CALCULATOR_TOOL_POSITION    -1          // Request default positioning of toolbar tool

class SAR_pi : public opencpn_plugin_116
{
public:
      SAR_pi(void *ppimgr);

//    The required PlugIn Methods
      int Init(void);
      bool DeInit(void);

      int GetAPIVersionMajor();
      int GetAPIVersionMinor();
      int GetPlugInVersionMajor();
      int GetPlugInVersionMinor();
	  wxString GetCommonName();
      wxBitmap *GetPlugInBitmap();
      wxString GetShortDescription();
      wxString GetLongDescription();

//    The required override PlugIn Methods
      int GetToolbarToolCount(void);
      void ShowPreferencesDialog( wxWindow* parent );
      void OnToolbarToolCallback(int id);
      void SetCursorLatLon(double lat, double lon);
      void SetPositionFix(PlugIn_Position_Fix &pfix);
	  
	  // For right click datum selection
	  void OnContextMenuItemCallback(int id);
	  void OnSARDialogClose();

//    Optional plugin overrides
      void SetColorScheme(PI_ColorScheme cs);


//    The override PlugIn Methods

//    Other public methods
      void SetCalculatorDialogX         (int x){ m_route_dialog_x = x;};
      void SetCalculatorDialogY         (int x){ m_route_dialog_y = x;};
      void SetCalculatorDialogWidth     (int x){ m_route_dialog_width = x;};
      void SetCalculatorDialogHeight    (int x){ m_route_dialog_height = x;};
      double GetShipLon(void) {return m_ship_lon;}
      double GetShipLat(void) {return m_ship_lat;}
      double GetCursorLon(void) {return m_cursor_lon;}
      double GetCursorLat(void) {return m_cursor_lat;}

	  int m_position_menu_id;
	  

private:
      wxFileConfig      *m_pconfig;
      wxWindow          *m_parent_window;
      bool              LoadConfig(void);
      bool              SaveConfig(void);
      Dlg               *m_pDialog;
      int               m_route_dialog_x, m_route_dialog_y,m_route_dialog_width,m_route_dialog_height;
      int               m_display_width, m_display_height;
      int               m_iOpacity;
      int               m_leftclick_tool_id;
      bool              m_ShowHelp,m_bCaptureCursor,m_bCaptureShip;
      double m_ship_lon,m_ship_lat,m_cursor_lon,m_cursor_lat;
	  bool				m_bSARShowIcon;
	  bool				m_bShowSAR;
	  wxBitmap			m_panelBitmap;
	 
};

#endif

/******************************************************************************
 *
 * Project:  OpenCPN
 *
 ***************************************************************************
 *   Copyright (C) 2013 by David S. Register                               *
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
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "SVGicons.h"
#include "ocpn_plugin.h"
#include "SAR_pi.h"

#include <wx/mstream.h>
#include <wx/filename.h>

#include <wx/stdpaths.h>

extern wxString *g_SData_Locn;
extern wxString *g_pHome_locn;
extern wxString *g_pData;
extern wxString *g_pImage;

SVGicons::SVGicons()
{
	m_dScaleFactor = 1.0;
	m_bUpdateIcons = false;
	m_ColourScheme = PI_GLOBAL_COLOR_SCHEME_RGB;

	initialize_images();
}

SVGicons::~SVGicons()
{
	delete g_SData_Locn;
	g_SData_Locn = NULL;
}
void SVGicons::initialize_images(void)
{
	wxFileName fn;

	fn.SetPath(GetPluginDataDir("SAR_pi"));
	fn.AppendDir(wxT("data"));
	g_SData_Locn = new wxString(fn.GetFullPath().c_str());
	wxString s = _("SAR_pi data location");
	wxLogMessage(wxT("%s: %s"), s.c_str(), fn.GetFullPath().c_str());

	m_failedBitmapLoad = false;

#ifdef PLUGIN_USE_SVG
	fn.SetFullName(wxT("sar_panel_icon.svg"));
	m_s_SAR_pi = fn.GetFullPath();
	m_bm_SAR_pi = LoadSVG(fn.GetFullPath());
	fn.SetFullName(wxT("sar_pi.svg"));
	m_s_SAR_grey_pi = fn.GetFullPath();
	m_bm_SAR_grey_pi = LoadSVG(fn.GetFullPath());
	fn.SetFullName(wxT("sar_pi_toggled.svg"));
	m_s_SAR_toggled_pi = fn.GetFullPath();
	m_bm_SAR_toggled_pi = LoadSVG(fn.GetFullPath());
#else
	m_failedBitmapLoad = true;
#endif

	if (m_failedBitmapLoad) {
		int ret = OCPNMessageBox_PlugIn(NULL, _("Failed to load all SAR_pi icons, check OCPN log for details"), _("OpenCPN Alert"), wxOK);
	}
	else {
		CreateSchemeIcons();
		ScaleIcons();
	}
}

#ifdef PLUGIN_USE_SVG
wxBitmap SVGicons::LoadSVG(const wxString filename, unsigned int width, unsigned int height)
{
	wxBitmap l__Bitmap = GetBitmapFromSVGFile(filename, width, height);
	if (!l__Bitmap.IsOk()) {
		m_failedBitmapLoad = true;
	}

	return l__Bitmap;
}

wxBitmap SVGicons::ScaleIcon(wxBitmap bitmap, const wxString filename, double sf)
{
	int w = bitmap.GetWidth();
	int h = bitmap.GetHeight();
	w *= sf;
	h *= sf;

	wxBitmap svgbm = GetBitmapFromSVGFile(filename, w, h);
	if (svgbm.GetWidth() > 0 && svgbm.GetHeight() > 0)
		return svgbm;
	return wxBitmap(32 * sf, 32 * sf); //scalled default blank bitmap
}
#endif // PLUGIN_USE_SVG

wxBitmap *SVGicons::ScaleIcon(wxBitmap bitmap, double sf)
{
	wxImage scaled_image = bitmap.ConvertToImage();
	return new wxBitmap(scaled_image.Scale(scaled_image.GetWidth() * sf, scaled_image.GetHeight() * sf, wxIMAGE_QUALITY_HIGH));
}

bool SVGicons::ScaleIcons()
{
	if (!SetScaleFactor()) return false;


#ifdef PLUGIN_USE_SVG

	// Dont scale the OD manager as that should be done by the OCPN toolbar
	//m_bm_SAR_pi = ScaleIcon( m_p_svgd_SAR_pi, m_p_img_SAR_pi, m_dScaleFactor );
	//m_bm_SAR_grey_pi = ScaleIcon( m_p_svgd_SAR_grey_pi, m_p_img_SAR_grey_pi, m_dScaleFactor );

#else
#endif // PLUGIN_USE_SVG

	CreateSchemeIcons();

	return true;
}

bool SVGicons::SetScaleFactor()
{
	if (m_dScaleFactor != GetOCPNGUIToolScaleFactor_PlugIn()) {
		m_dScaleFactor = GetOCPNGUIToolScaleFactor_PlugIn();
		return true;
	}
	return false;
}

void SVGicons::SetColourScheme(PI_ColorScheme cs)
{
	if (m_ColourScheme == cs) m_bUpdateIcons = false;
	else {
		m_bUpdateIcons = true;
		m_ColourScheme = cs;
		ChangeScheme();
	}
}

void SVGicons::ChangeScheme(void)
{
	switch (m_ColourScheme) {
	case PI_GLOBAL_COLOR_SCHEME_RGB:
	case PI_GLOBAL_COLOR_SCHEME_DAY:
		m_bm_SAR_grey_pi = m_bm_day_SAR_grey_pi;
		break;
	case PI_GLOBAL_COLOR_SCHEME_DUSK:
		m_bm_SAR_grey_pi = m_bm_dusk_SAR_grey_pi;
		break;
	case PI_GLOBAL_COLOR_SCHEME_NIGHT:
		m_bm_SAR_grey_pi = m_bm_night_SAR_grey_pi;
		break;
	default:
		break;
	}
}

void SVGicons::CreateSchemeIcons()
{
	m_bm_day_SAR_grey_pi = m_bm_SAR_grey_pi;
	m_bm_day_SAR_toggled_pi = m_bm_SAR_toggled_pi;
	m_bm_day_SAR_pi = m_bm_SAR_pi;
	m_bm_dusk_SAR_grey_pi = BuildDimmedToolBitmap(m_bm_SAR_grey_pi, 128);
	m_bm_dusk_SAR_pi = BuildDimmedToolBitmap(m_bm_SAR_pi, 128);
	m_bm_dusk_SAR_toggled_pi = BuildDimmedToolBitmap(m_bm_SAR_toggled_pi, 128);
	m_bm_night_SAR_grey_pi = BuildDimmedToolBitmap(m_bm_SAR_grey_pi, 32);
	m_bm_night_SAR_pi = BuildDimmedToolBitmap(m_bm_SAR_pi, 32);
	m_bm_night_SAR_toggled_pi = BuildDimmedToolBitmap(m_bm_SAR_toggled_pi, 32);

}

wxBitmap SVGicons::BuildDimmedToolBitmap(wxBitmap bmp_normal, unsigned char dim_ratio)
{
	wxImage img_dup = bmp_normal.ConvertToImage();

	if (!img_dup.IsOk())
		return bmp_normal;

	if (dim_ratio < 200)
	{
		//  Create a dimmed version of the image/bitmap
		int gimg_width = img_dup.GetWidth();
		int gimg_height = img_dup.GetHeight();

		double factor = (double)(dim_ratio) / 256.0;

		for (int iy = 0; iy < gimg_height; iy++)
		{
			for (int ix = 0; ix < gimg_width; ix++)
			{
				if (!img_dup.IsTransparent(ix, iy))
				{
					wxImage::RGBValue rgb(img_dup.GetRed(ix, iy), img_dup.GetGreen(ix, iy), img_dup.GetBlue(ix, iy));
					wxImage::HSVValue hsv = wxImage::RGBtoHSV(rgb);
					hsv.value = hsv.value * factor;
					wxImage::RGBValue nrgb = wxImage::HSVtoRGB(hsv);
					img_dup.SetRGB(ix, iy, nrgb.red, nrgb.green, nrgb.blue);
				}
			}
		}
	}

	//  Make a bitmap
	wxBitmap toolBarBitmap;

#ifdef __WXMSW__
	wxBitmap tbmp(img_dup.GetWidth(), img_dup.GetHeight(), -1);
	wxMemoryDC dwxdc;
	dwxdc.SelectObject(tbmp);

	toolBarBitmap = wxBitmap(img_dup, (wxDC &)dwxdc);
#else
	toolBarBitmap = wxBitmap(img_dup);
#endif

	// store it
	return toolBarBitmap;
}

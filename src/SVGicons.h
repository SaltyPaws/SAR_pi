
#ifndef SVGICONS
#define SVGICONS

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "ocpn_plugin.h"




class SVGicons
{
public:
	SVGicons();
	~SVGicons();

	void    initialize_images(void);
	bool    ScaleIcons(void);
	wxSize  GetIconSize(void);
	bool    SetScaleFactor(void);
	void    SetColourScheme(PI_ColorScheme cs);
	void    ChangeScheme(void);

	wxBitmap    m_bm_SAR_pi;
	wxBitmap    m_bm_SAR_toggled_pi;
	wxBitmap    m_bm_SAR_grey_pi;

	wxString    m_s_SAR_pi;
	wxString    m_s_SAR_toggled_pi;
	wxString    m_s_SAR_grey_pi;

	bool        m_bUpdateIcons;

private:
	wxBitmap    *ScaleIcon(wxBitmap bitmap, double sf);
	void        CreateSchemeIcons(void);
	wxBitmap    BuildDimmedToolBitmap(wxBitmap bmp_normal, unsigned char dim_ratio);

#ifdef PLUGIN_USE_SVG
	wxBitmap    LoadSVG(const wxString filename, unsigned int width = -1, unsigned int height = -1);
	wxBitmap    ScaleIcon(wxBitmap bitmap, const wxString filename, double sf);
#endif
	wxBitmap    m_bm_day_SAR_pi;
	wxBitmap    m_bm_day_SAR_toggled_pi;
	wxBitmap    m_bm_day_SAR_grey_pi;

	wxBitmap    m_bm_dusk_SAR_pi;
	wxBitmap    m_bm_dusk_SAR_toggled_pi;
	wxBitmap    m_bm_dusk_SAR_grey_pi;

	wxBitmap    m_bm_night_SAR_pi;
	wxBitmap    m_bm_night_SAR_toggled_pi;
	wxBitmap    m_bm_night_SAR_grey_pi;

	double          m_dScaleFactor;
	PI_ColorScheme  m_ColourScheme;
	bool            m_failedBitmapLoad;
};
#endif /* SVGicons_H*/

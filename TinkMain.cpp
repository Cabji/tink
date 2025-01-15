#include "TinkMain.h"
#include <wx/toolbar.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <iostream>

TinkMain::TinkMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
	: TinkBase(parent, id, title, pos, size, style)
{
	// Initialize the PNG image handler
	wxImage::AddHandler(new wxPNGHandler);

	// Load and scale the PNG icons
	wxImage homeImage(wxT("icons/home.png"), wxBITMAP_TYPE_PNG);
	wxImage calculatorImage(wxT("icons/calculator.png"), wxBITMAP_TYPE_PNG);
	wxImage brewlogImage(wxT("icons/log.png"), wxBITMAP_TYPE_PNG);

	// Scale the bitmaps to the desired size
	wxSize iconSize(32, 32);
	homeImage = wxImage(homeImage.Rescale(iconSize.GetWidth(), iconSize.GetHeight()));
	calculatorImage = wxImage(calculatorImage.Rescale(iconSize.GetWidth(), iconSize.GetHeight()));
	brewlogImage = wxImage(brewlogImage.Rescale(iconSize.GetWidth(), iconSize.GetHeight()));

	if (homeImage.HasMask())
	{
		std::cout << "Home image has mask" << std::endl;
		homeImage.InitAlpha(); // Initializes the alpha channel if it's missing
	}
	// set icons for toolbar
	m_toolBar->SetToolNormalBitmap(ID_TBTN_HOME, homeImage);
	m_toolBar->SetToolNormalBitmap(ID_TBTN_CALCULATOR, calculatorImage);
	m_toolBar->SetToolNormalBitmap(ID_TBTN_LOG, brewlogImage);
	// Realize the toolbar
	m_toolBar->Realize();

	Show();
}
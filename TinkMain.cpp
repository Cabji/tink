#include "TinkMain.h"

TinkMain::TinkMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
	: TinkBase(parent, id, title, pos, size, style)
{
	// Load and scale the PNG icons
	wxBitmap homeBitmap(wxT("icons/home.png"), wxBITMAP_TYPE_PNG);
	wxBitmap calculatorBitmap(wxT("icons/calculator.png"), wxBITMAP_TYPE_PNG);
	wxBitmap logBitmap(wxT("icons/log.png"), wxBITMAP_TYPE_PNG);

	// Scale the bitmaps to the desired size
	wxSize iconSize(32, 32);
	homeBitmap = wxBitmap(homeBitmap.ConvertToImage().Rescale(iconSize.GetWidth(), iconSize.GetHeight()));
	calculatorBitmap = wxBitmap(calculatorBitmap.ConvertToImage().Rescale(iconSize.GetWidth(), iconSize.GetHeight()));
	logBitmap = wxBitmap(logBitmap.ConvertToImage().Rescale(iconSize.GetWidth(), iconSize.GetHeight()));

	// set icons for toolbar
	m_toolBar->SetToolNormalBitmap(ID_TBTN_HOME, homeBitmap);
	m_toolBar->SetToolNormalBitmap(ID_TBTN_CALCULATOR, calculatorBitmap);
	m_toolBar->SetToolNormalBitmap(ID_TBTN_LOG, logBitmap);
	// Realize the toolbar
	m_toolBar->Realize();

	Show();
}
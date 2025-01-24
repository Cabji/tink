#include "TinkMain.h"
#include <wx/toolbar.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <iostream>

TinkMain::TinkMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
	: TinkBase(parent, id, title, pos, size, style)
{

	// Bind event handlers
	Bind(wxEVT_COMMAND_TOOL_CLICKED, &TinkMain::OnCalculatorTBtnClicked, this, ID_TBTN_CALCULATOR);
	Bind(wxEVT_MENU, &TinkMain::OnMenuFileExit, this, ID_MENU_FILE_EXIT);
	// Initialize the PNG image handler
	wxImage::AddHandler(new wxPNGHandler);

	// Load and scale the PNG icons
	wxImage homeImage(wxT("icons/home.png"), wxBITMAP_TYPE_PNG);
	wxImage calculatorImage(wxT("icons/calculator.png"), wxBITMAP_TYPE_PNG);
	wxImage brewlogImage(wxT("icons/log.png"), wxBITMAP_TYPE_PNG);

	// Scale the bitmaps to the desired size
	wxSize iconSize(DEFAULT_ICON_HEIGHT, DEFAULT_ICON_WIDTH);
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

	m_webViewHome = wxWebView::New(this, wxID_ANY, "https://homedistiller.org/wiki/index.php/Main_Page", wxDefaultPosition, wxDefaultSize, wxWebViewBackendDefault);

	// Add the web view to the m_homeWebViewSizer
	m_homeWebViewSizer->Add(m_webViewHome, 1, wxEXPAND, 0);
	m_panelHomeWebView->SetSizer(m_homeWebViewSizer);
	m_currentPanel = m_panelHomeWebView;

	std::cout << "m_currentPanel: " << m_currentPanel << std::endl
			  << "m_panelHomeWebView: " << m_panelHomeWebView << std::endl;

	Show();
}

void TinkMain::OnCalculatorTBtnClicked(wxCommandEvent &event)
{
	std::cout << "Calculator button clicked" << std::endl;

	// Remove the web view from the sizer
	m_mainFrameSizer->Detach(m_currentPanel);
	m_currentPanel->Hide();

	// Add the calculators frame to the sizer
	m_panelCalculators->Show();
	m_currentPanel = m_panelCalculators;

	// Layout the sizer to update the UI
	m_mainFrameSizer->Layout();
}

void TinkMain::OnMenuFileExit(wxCommandEvent &event)
{
	std::cout << "Exit menu item clicked" << std::endl;
	Close(true);
}

void TinkMain::OnHomeTBtnClicked(wxCommandEvent &event)
{
	std::cout << "Home button clicked" << std::endl;
}

bool TinkMain::ShowPanelAsCurrent(wxPanel *panelToShow)
{
	return false;
}
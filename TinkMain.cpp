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
	m_webViewHome = new MyTinkWebView(this);
	m_calculatorsPanel = new MyTinkCalculators(this);
	m_brewersLogPanel = new MyTinkBrewersLog(this);
	m_currentPanel = m_webViewHome;
	m_mainFrameSizer->Add(m_webViewHome, wxGBPosition(0, 0), wxGBSpan(1, 1), wxEXPAND | wxALL, 5);
	m_mainFrameSizer->Layout();
	Show();
}

void TinkMain::OnCalculatorTBtnClicked(wxCommandEvent &event)
{
	std::cout << "Calculator button clicked" << std::endl;

	m_mainFrameSizer->Add(m_calculatorsPanel, wxGBPosition(0, 0), wxGBSpan(1, 1), wxEXPAND | wxALL, 5);
	m_mainFrameSizer->Layout();
	// Remove the current panel from the sizer
	m_mainFrameSizer->Detach(m_currentPanel);
	m_currentPanel->Hide();

	// Point to the calculators frame
	m_currentPanel = m_calculatorsPanel;

	// Layout the sizer to update the UI
	m_mainFrameSizer->Layout();
	m_calculatorsPanel->Show();
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
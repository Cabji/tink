#include "TinkBase.h"
#include "TinkMain.h"
#include <wx/toolbar.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <iostream>

TinkMain::TinkMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
	: TinkBase(parent, id, title, pos, size, style)
{

	// Bind event handlers
	Bind(wxEVT_TOOL, &TinkMain::OnTBtnClicked, this);
	Bind(wxEVT_MENU, &TinkMain::OnMenuFileExit, this, ID_MENU_FILE_EXIT);
	Bind(wxEVT_MENU, &TinkMain::OnMenuFileOptions, this, ID_MENU_FILE_OPTIONS);
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
	m_optionsDialog = new MyTinkOptions(this);
	m_calculatorsPanel->Hide();
	m_brewersLogPanel->Hide();
	m_currentPanel = m_webViewHome;
	m_mainFrameSizer->Add(m_currentPanel, wxGBPosition(0, 0), wxGBSpan(1, 1), wxEXPAND | wxALL, 5);
	m_mainFrameSizer->Layout();
	Show();
}

void TinkMain::OnTBtnClicked(wxCommandEvent &event)
{
	int id = event.GetId();
	wxPanel *newPanel = nullptr;

	switch (id)
	{
	case ID_TBTN_HOME:
		newPanel = m_webViewHome;
		break;
	case ID_TBTN_CALCULATOR:
		newPanel = m_calculatorsPanel;
		break;
	case ID_TBTN_LOG:
		newPanel = m_brewersLogPanel;
		break;
	default:
		std::cout << "Unhandled toolbar button clicked" << std::endl;
		return;
	}

	if (newPanel == m_currentPanel)
	{
		return;
	}

	m_currentPanel->Hide();
	m_mainFrameSizer->Detach(m_currentPanel);
	m_currentPanel = newPanel;
	m_mainFrameSizer->Add(m_currentPanel, wxGBPosition(0, 0), wxGBSpan(1, 1), wxEXPAND | wxALL, 5);
	m_currentPanel->Layout();
	m_currentPanel->FitInside();
	m_currentPanel->Show();
	Layout();
}

void TinkMain::OnMenuFileExit(wxCommandEvent &event)
{
	std::cout << "Exit menu item clicked" << std::endl;
	Close(true);
}

void TinkMain::OnMenuFileOptions(wxCommandEvent &event)
{
	std::cout << "Options menu item clicked" << std::endl;
	m_optionsDialog->Show();
}

void TinkMain::OnHomeTBtnClicked(wxCommandEvent &event)
{
	std::cout << "Home button clicked" << std::endl;
}

bool TinkMain::ShowPanelAsCurrent(wxPanel *panelToShow)
{
	return false;
}
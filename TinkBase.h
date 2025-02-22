///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/toolbar.h>
#include <wx/gbsizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class TinkBase
///////////////////////////////////////////////////////////////////////////////
class TinkBase : public wxFrame
{
	private:

	protected:
		enum
		{
			ID_MENU_FILE_EXIT = 6000,
			ID_TBTN_HOME,
			ID_TBTN_CALCULATOR,
			ID_TBTN_LOG,
		};

		wxMenuBar* m_menuBar;
		wxMenu* m_menuFile;
		wxToolBar* m_toolBar;
		wxToolBarToolBase* m_tbBtnHome;
		wxToolBarToolBase* m_tbBtnCalculator;
		wxToolBarToolBase* m_tbBtnBrewingLog;
		wxGridBagSizer* m_mainFrameSizer;
		wxStatusBar* m_statusBar;

	public:

		TinkBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tink"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 827,561 ), long style = wxDEFAULT_FRAME_STYLE|wxBORDER_THEME|wxCLIP_CHILDREN|wxTAB_TRAVERSAL );

		~TinkBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TinkWebView
///////////////////////////////////////////////////////////////////////////////
class TinkWebView : public wxPanel
{
	private:

	protected:
		wxBoxSizer* m_sizer;

	public:

		TinkWebView( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~TinkWebView();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TinkCalculators
///////////////////////////////////////////////////////////////////////////////
class TinkCalculators : public wxPanel
{
	private:

	protected:
		enum
		{
			ID_CALC_INPUT_FAVOL = 6000,
			ID_CALC_INPUT_FAABV,
			ID_CALC_INPUT_FBVOL,
			ID_CALC_INPUT_FBABV,
		};

		wxGridBagSizer* m_gbSizer;
		wxStaticText* m_lblTitle;
		wxStaticText* m_lblVolFluidA;
		wxTextCtrl* m_VolumeFluidA;
		wxStaticText* m_lblABVFluidA;
		wxTextCtrl* m_ABVFluidA;
		wxStaticText* m_lblVolFluidB;
		wxTextCtrl* m_VolumeFluidB;
		wxStaticText* m_lblABVFluidB;
		wxTextCtrl* m_ABVFluidB;
		wxStaticText* m_FluidCombinationResult;

	public:

		TinkCalculators( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~TinkCalculators();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TinkBrewersLog
///////////////////////////////////////////////////////////////////////////////
class TinkBrewersLog : public wxPanel
{
	private:

	protected:
		wxGridBagSizer* m_gbSizer;
		wxStaticText* m_lblTitle;

	public:

		TinkBrewersLog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~TinkBrewersLog();

};


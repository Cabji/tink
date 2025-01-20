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
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/gbsizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>

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
			ID_TBTN_HOME = 6000,
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

		TinkBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tink"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 827,561 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TinkBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TinkCalulators
///////////////////////////////////////////////////////////////////////////////
class TinkCalulators : public wxFrame
{
	private:

	protected:
		wxStaticText* m_lblTitle;

	public:

		TinkCalulators( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TinkCalulators();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TinkBrewersLog
///////////////////////////////////////////////////////////////////////////////
class TinkBrewersLog : public wxFrame
{
	private:

	protected:
		wxStaticText* m_lblTitle;

	public:

		TinkBrewersLog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TinkBrewersLog();

};


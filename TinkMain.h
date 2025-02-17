#ifndef __TinkMain__
#define __TinkMain__

/**
@file
Subclass of TinkBase, which is generated by wxFormBuilder.
*/

#include "TinkBase.h"
#include "MyTinkWebView.h"
#include "MyTinkCalculators.h"
#include "MyTinkBrewersLog.h"

//// end generated include

/** Implementing TinkBase */
class TinkMain : public TinkBase
{
public:
	//// end generated class members

	// custom constructor declared below here
	TinkMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style);
	void OnCalculatorTBtnClicked(wxCommandEvent &event);
	void OnMenuFileExit(wxCommandEvent &event);
	void OnHomeTBtnClicked(wxCommandEvent &event);
	bool ShowPanelAsCurrent(wxPanel *panelToShow);
	double const APP_VERSION = 0.1;
	int const DEFAULT_ICON_HEIGHT = 24;
	int const DEFAULT_ICON_WIDTH = 24;

private:
	wxPanel *m_currentPanel = nullptr;
	MyTinkWebView *m_webViewHome = nullptr;
	MyTinkCalculators *m_calculatorsPanel = nullptr;
	MyTinkBrewersLog *m_brewersLogPanel = nullptr;
};

#endif // __TinkMain__

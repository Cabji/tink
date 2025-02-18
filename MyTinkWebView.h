#ifndef __MyTinkWebView__
#define __MyTinkWebView__

/**
@file
Subclass of TinkWebView, which is generated by wxFormBuilder.
*/

#include "TinkBase.h"
#include <wx/webview.h>

//// end generated include

/** Implementing TinkWebView */
class MyTinkWebView : public TinkWebView
{
public:
	/** Constructor */
	MyTinkWebView(wxWindow *parent);
	//// end generated class members

private:
	wxWebView *m_webViewHome = nullptr;
	void OnWebViewLoaded(wxWebViewEvent &event);
};

#endif // __MyTinkWebView__

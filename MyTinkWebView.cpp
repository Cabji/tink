#include "MyTinkWebView.h"

MyTinkWebView::MyTinkWebView(wxWindow *parent)
	: TinkWebView(parent)
{
	m_webViewHome = wxWebView::New(this, wxID_ANY, "https://homedistiller.org/wiki/index.php/Main_Page", wxDefaultPosition, wxDefaultSize, wxWebViewBackendDefault);

	// Inject JavaScript to hide scrollbars
	m_webViewHome->Bind(wxEVT_WEBVIEW_LOADED, &MyTinkWebView::OnWebViewLoaded, this);

	// Add the web view to the m_sizer
	m_sizer->Add(m_webViewHome, 1, wxEXPAND, 0);
	this->SetSizer(m_sizer);
}

void MyTinkWebView::OnWebViewLoaded(wxWebViewEvent &event)
{
	m_webViewHome->RunScript("document.body.style.overflow = 'hidden';");
}
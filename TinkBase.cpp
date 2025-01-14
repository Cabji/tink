///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "TinkBase.h"

///////////////////////////////////////////////////////////////////////////

TinkBase::TinkBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menuBar = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	m_menuBar->Append( m_menuFile, _("&File") );

	this->SetMenuBar( m_menuBar );

	m_toolBar = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	m_tbBtnHome = m_toolBar->AddTool( ID_TBTN_HOME, _("Home"), wxBitmap( wxT("IDI_PNG_HOME"), wxBITMAP_TYPE_RESOURCE ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tbBtnCalculator = m_toolBar->AddTool( ID_TBTN_CALCULATOR, _("tool"), wxBitmap( wxT("IDI_PNG_CALCULATOR"), wxBITMAP_TYPE_RESOURCE ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tbBtnBrewingLog = m_toolBar->AddTool( ID_TBTN_LOG, _("tool"), wxBitmap( wxT("IDI_PNG_LOG"), wxBITMAP_TYPE_RESOURCE ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_toolBar->Realize();

	m_mainFrameSizer = new wxGridBagSizer( 0, 0 );
	m_mainFrameSizer->SetFlexibleDirection( wxBOTH );
	m_mainFrameSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	this->SetSizer( m_mainFrameSizer );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );
}

TinkBase::~TinkBase()
{
}

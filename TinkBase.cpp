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
	m_tbBtnHome = m_toolBar->AddTool( ID_TBTN_HOME, _("Home"), wxBitmap( wxT("icons/home.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Home"), wxEmptyString, NULL );

	m_tbBtnCalculator = m_toolBar->AddTool( ID_TBTN_CALCULATOR, _("tool"), wxBitmap( wxT("icons/calculator.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Calculators"), wxEmptyString, NULL );

	m_tbBtnBrewingLog = m_toolBar->AddTool( ID_TBTN_LOG, _("tool"), wxBitmap( wxT("icons/log.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Brewer's Log"), wxEmptyString, NULL );

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

TinkCalulators::TinkCalulators( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridBagSizer* m_calculatorsSizer;
	m_calculatorsSizer = new wxGridBagSizer( 0, 0 );
	m_calculatorsSizer->SetFlexibleDirection( wxBOTH );
	m_calculatorsSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lblTitle = new wxStaticText( this, wxID_ANY, _("Calculators"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblTitle->Wrap( -1 );
	m_calculatorsSizer->Add( m_lblTitle, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


	this->SetSizer( m_calculatorsSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

TinkCalulators::~TinkCalulators()
{
}

TinkBrewersLog::TinkBrewersLog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridBagSizer* m_brewersLogSizer;
	m_brewersLogSizer = new wxGridBagSizer( 0, 0 );
	m_brewersLogSizer->SetFlexibleDirection( wxBOTH );
	m_brewersLogSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lblTitle = new wxStaticText( this, wxID_ANY, _("Brewer's Log"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblTitle->Wrap( -1 );
	m_brewersLogSizer->Add( m_lblTitle, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );


	this->SetSizer( m_brewersLogSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

TinkBrewersLog::~TinkBrewersLog()
{
}

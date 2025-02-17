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
	wxMenuItem* m_FileExit;
	m_FileExit = new wxMenuItem( m_menuFile, ID_MENU_FILE_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Ctrl + x"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( m_FileExit );

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

	m_panelCalculators = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelCalculators->Hide();

	m_calculatorsSizer = new wxGridBagSizer( 0, 0 );
	m_calculatorsSizer->SetFlexibleDirection( wxBOTH );
	m_calculatorsSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_calculatorsSizer->AddGrowableCol( 0 );
	m_calculatorsSizer->AddGrowableRow( 0 );

	m_panelCalculators->SetSizer( m_calculatorsSizer );
	m_panelCalculators->Layout();
	m_calculatorsSizer->Fit( m_panelCalculators );
	m_mainFrameSizer->Add( m_panelCalculators, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND | wxALL, 5 );

	m_panelBrewersLog = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelBrewersLog->Hide();

	m_brewersLogSizer = new wxGridBagSizer( 0, 0 );
	m_brewersLogSizer->SetFlexibleDirection( wxBOTH );
	m_brewersLogSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelBrewersLog->SetSizer( m_brewersLogSizer );
	m_panelBrewersLog->Layout();
	m_brewersLogSizer->Fit( m_panelBrewersLog );
	m_mainFrameSizer->Add( m_panelBrewersLog, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxEXPAND | wxALL, 5 );


	m_mainFrameSizer->AddGrowableCol( 0 );
	m_mainFrameSizer->AddGrowableRow( 0 );

	this->SetSizer( m_mainFrameSizer );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );
}

TinkBase::~TinkBase()
{
}

TinkWebView::TinkWebView( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	m_sizer = new wxBoxSizer( wxVERTICAL );


	this->SetSizer( m_sizer );
	this->Layout();
}

TinkWebView::~TinkWebView()
{
}

TinkCalculators::TinkCalculators( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	m_gbSizer = new wxGridBagSizer( 0, 0 );
	m_gbSizer->SetFlexibleDirection( wxBOTH );
	m_gbSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lblTitle = new wxStaticText( this, wxID_ANY, _("Calculators"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblTitle->Wrap( -1 );
	m_gbSizer->Add( m_lblTitle, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


	m_gbSizer->AddGrowableCol( 0 );
	m_gbSizer->AddGrowableRow( 0 );

	this->SetSizer( m_gbSizer );
	this->Layout();
}

TinkCalculators::~TinkCalculators()
{
}

TinkBrewersLog::TinkBrewersLog( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	m_gbSizer = new wxGridBagSizer( 0, 0 );
	m_gbSizer->SetFlexibleDirection( wxBOTH );
	m_gbSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lblTitle = new wxStaticText( this, wxID_ANY, _("Brewer's Log"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblTitle->Wrap( -1 );
	m_gbSizer->Add( m_lblTitle, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );


	m_gbSizer->AddGrowableCol( 0 );
	m_gbSizer->AddGrowableRow( 0 );

	this->SetSizer( m_gbSizer );
	this->Layout();
}

TinkBrewersLog::~TinkBrewersLog()
{
}

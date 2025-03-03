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

	wxMenuItem* m_FileOptions;
	m_FileOptions = new wxMenuItem( m_menuFile, ID_MENU_FILE_OPTIONS, wxString( _("Options") ) + wxT('\t') + wxT("Ctrl + O"), _("Show program Options"), wxITEM_NORMAL );
	m_menuFile->Append( m_FileOptions );

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
	m_sizer->Fit( this );
}

TinkWebView::~TinkWebView()
{
}

TinkCalculators::TinkCalculators( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxStaticBoxSizer* m_sbSizerFluidCombination;
	m_sbSizerFluidCombination = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Calculators") ), wxVERTICAL );

	wxString m_CalculatorTypeChoices[] = { _("Fluid Combination"), _("Target ABV") };
	int m_CalculatorTypeNChoices = sizeof( m_CalculatorTypeChoices ) / sizeof( wxString );
	m_CalculatorType = new wxChoice( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_CalculatorTypeNChoices, m_CalculatorTypeChoices, 0 );
	m_CalculatorType->SetSelection( 0 );
	m_sbSizerFluidCombination->Add( m_CalculatorType, 0, wxALL|wxEXPAND, 5 );

	m_lblVolFluidA = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("Fluid A Volume"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblVolFluidA->Wrap( -1 );
	m_sbSizerFluidCombination->Add( m_lblVolFluidA, 0, wxALL|wxEXPAND, 5 );

	m_VolumeFluidA = new wxTextCtrl( m_sbSizerFluidCombination->GetStaticBox(), ID_CALC_INPUT_FAVOL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sbSizerFluidCombination->Add( m_VolumeFluidA, 0, wxALL|wxEXPAND, 5 );

	m_lblABVFluidA = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("Fluid A ABV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblABVFluidA->Wrap( -1 );
	m_sbSizerFluidCombination->Add( m_lblABVFluidA, 0, wxALL|wxEXPAND, 5 );

	m_ABVFluidA = new wxTextCtrl( m_sbSizerFluidCombination->GetStaticBox(), ID_CALC_INPUT_FAABV, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sbSizerFluidCombination->Add( m_ABVFluidA, 0, wxALL|wxEXPAND, 5 );

	m_lblVolFluidB = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("+\nFluid B Volume"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblVolFluidB->Wrap( -1 );
	m_sbSizerFluidCombination->Add( m_lblVolFluidB, 0, wxALL|wxEXPAND, 5 );

	m_VolumeFluidB = new wxTextCtrl( m_sbSizerFluidCombination->GetStaticBox(), ID_CALC_INPUT_FBVOL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sbSizerFluidCombination->Add( m_VolumeFluidB, 0, wxALL|wxEXPAND, 5 );

	m_lblABVFluidB = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("Fluid B ABV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblABVFluidB->Wrap( -1 );
	m_sbSizerFluidCombination->Add( m_lblABVFluidB, 0, wxALL|wxEXPAND, 5 );

	m_ABVFluidB = new wxTextCtrl( m_sbSizerFluidCombination->GetStaticBox(), ID_CALC_INPUT_FBABV, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_sbSizerFluidCombination->Add( m_ABVFluidB, 0, wxALL|wxEXPAND, 5 );

	m_lblABVTarget = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("Target ABV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblABVTarget->Wrap( -1 );
	m_lblABVTarget->Enable( false );

	m_sbSizerFluidCombination->Add( m_lblABVTarget, 0, wxALL, 5 );

	m_ABVTarget = new wxTextCtrl( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_ABVTarget->Enable( false );

	m_sbSizerFluidCombination->Add( m_ABVTarget, 0, wxALL|wxEXPAND, 5 );

	m_FluidCombinationResult = new wxStaticText( m_sbSizerFluidCombination->GetStaticBox(), wxID_ANY, _("Result = ? @ ? ABV"), wxDefaultPosition, wxDefaultSize, 0 );
	m_FluidCombinationResult->Wrap( -1 );
	m_sbSizerFluidCombination->Add( m_FluidCombinationResult, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( m_sbSizerFluidCombination );
	this->Layout();
	m_sbSizerFluidCombination->Fit( this );
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

	m_createDB = new wxButton( this, wxID_ANY, _("Create DB File"), wxDefaultPosition, wxDefaultSize, 0 );
	m_gbSizer->Add( m_createDB, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );


	m_gbSizer->AddGrowableCol( 0 );
	m_gbSizer->AddGrowableRow( 0 );
	m_gbSizer->AddGrowableRow( 1 );

	this->SetSizer( m_gbSizer );
	this->Layout();
}

TinkBrewersLog::~TinkBrewersLog()
{
}

TinkOptions::TinkOptions( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxStaticBoxSizer* m_sizer0;
	m_sizer0 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );

	m_optionsNotebook = new wxNotebook( m_sizer0->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_optionsPageGeneral = new wxPanel( m_optionsNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_optionsPageGeneral->Hide();

	wxGridBagSizer* m_sizerPageGeneral;
	m_sizerPageGeneral = new wxGridBagSizer( 0, 0 );
	m_sizerPageGeneral->SetFlexibleDirection( wxBOTH );
	m_sizerPageGeneral->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lblSettingMode = new wxStaticText( m_optionsPageGeneral, wxID_ANY, _("Program setting files save mode"), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblSettingMode->Wrap( -1 );
	m_sizerPageGeneral->Add( m_lblSettingMode, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );

	wxString m_OPTSettingModeChoices[] = { _("User Home Folder"), _("Portable") };
	int m_OPTSettingModeNChoices = sizeof( m_OPTSettingModeChoices ) / sizeof( wxString );
	m_OPTSettingMode = new wxChoice( m_optionsPageGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_OPTSettingModeNChoices, m_OPTSettingModeChoices, wxCB_SORT );
	m_OPTSettingMode->SetSelection( 0 );
	m_sizerPageGeneral->Add( m_OPTSettingMode, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );


	m_sizerPageGeneral->AddGrowableCol( 1 );

	m_optionsPageGeneral->SetSizer( m_sizerPageGeneral );
	m_optionsPageGeneral->Layout();
	m_sizerPageGeneral->Fit( m_optionsPageGeneral );
	m_optionsNotebook->AddPage( m_optionsPageGeneral, _("General"), false );

	m_sizer0->Add( m_optionsNotebook, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( m_sizer0 );
	this->Layout();

	this->Centre( wxBOTH );
}

TinkOptions::~TinkOptions()
{
}

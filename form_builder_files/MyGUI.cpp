///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyGUI.h"

///////////////////////////////////////////////////////////////////////////

form_main::form_main( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* box_Sizer_1;
	box_Sizer_1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("ПРИВЕТИК"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 35, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Lt BT") ) );

	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 10 );

	m_calendar1 = new wxCalendarCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	bSizer2->Add( m_calendar1, 0, wxALL, 5 );

	m_scintilla1 = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_scintilla1->SetUseTabs( true );
	m_scintilla1->SetTabWidth( 4 );
	m_scintilla1->SetIndent( 4 );
	m_scintilla1->SetTabIndents( true );
	m_scintilla1->SetBackSpaceUnIndents( true );
	m_scintilla1->SetViewEOL( false );
	m_scintilla1->SetViewWhiteSpace( false );
	m_scintilla1->SetMarginWidth( 2, 0 );
	m_scintilla1->SetIndentationGuides( true );
	m_scintilla1->SetReadOnly( false );
	m_scintilla1->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_scintilla1->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_scintilla1->SetMarginWidth( 1, 16);
	m_scintilla1->SetMarginSensitive( 1, true );
	m_scintilla1->SetProperty( wxT("fold"), wxT("1") );
	m_scintilla1->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_scintilla1->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_scintilla1->SetMarginWidth( 0, m_scintilla1->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_scintilla1->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_scintilla1->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	bSizer2->Add( m_scintilla1, 1, wxEXPAND | wxALL, 5 );


	box_Sizer_1->Add( bSizer2, 1, wxEXPAND, 5 );

	button_1 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	box_Sizer_1->Add( button_1, 1, wxALL|wxEXPAND, 20 );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );

	m_richText1 = new wxRichTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxVSCROLL|wxHSCROLL|wxNO_BORDER|wxWANTS_CHARS );
	gSizer1->Add( m_richText1, 1, wxALL|wxEXPAND, 5 );


	box_Sizer_1->Add( gSizer1, 1, wxEXPAND, 5 );


	this->SetSizer( box_Sizer_1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	button_1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( form_main::e_button_1_click ), NULL, this );
}

form_main::~form_main()
{
	// Disconnect Events
	button_1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( form_main::e_button_1_click ), NULL, this );

}

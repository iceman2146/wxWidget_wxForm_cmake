///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/calctrl.h>
#include <wx/stc/stc.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class form_main
///////////////////////////////////////////////////////////////////////////////
class form_main : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxCalendarCtrl* m_calendar1;
		wxStyledTextCtrl* m_scintilla1;
		wxButton* button_1;
		wxRichTextCtrl* m_richText1;

		// Virtual event handlers, override them in your derived class
		virtual void e_button_1_click( wxCommandEvent& event ) { event.Skip(); }


	public:

		form_main( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 548,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~form_main();

};


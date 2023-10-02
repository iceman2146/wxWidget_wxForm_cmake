#include "MyGUIform_main.h"

MyGUIform_main::MyGUIform_main( wxWindow* parent )
:
form_main( parent )
{
m_staticText1->SetLabel(_("Hello"));

}
void MyGUIform_main::e_button_1_click(wxCommandEvent& event)
{
    m_staticText1->SetLabel(_("Hello!"));
}
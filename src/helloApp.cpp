#include "HelloApp.h"
#include "MyGUIform_main.h"

IMPLEMENT_APP(HelloApp)

HelloApp::HelloApp() {}
	

HelloApp::~HelloApp() {
}

bool HelloApp::OnInit() {
	MyGUIform_main* frame = new MyGUIform_main((wxWindow*)NULL);
	frame->Show();
	SetTopWindow(frame);
	return true;
}
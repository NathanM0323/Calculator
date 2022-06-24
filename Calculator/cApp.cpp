#include "cApp.h"

// Sets the application
wxIMPLEMENT_APP(cApp);

cApp::cApp() {}

cApp::~cApp() {}

// On intializing of the application, create and show the wxFrame
bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();

	return true;
}
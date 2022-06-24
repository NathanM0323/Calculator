#pragma once

#include "wx/wx.h"
#include "cMain.h"

class cApp : public wxApp
{
public:
	cApp();
	~cApp();
private:
	// Initalizes the wxFrame
	cMain* m_frame1 = nullptr;
public:
	// Initalizes the app intializng function
	virtual bool OnInit();
};
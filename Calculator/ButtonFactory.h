#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "wx/wx.h"

class ButtonFactory : public wxFrame
{
public:
	ButtonFactory();
	~ButtonFactory();

public:
	// Initalizes the button creation function
	wxButton* CreateButtons(wxWindow* parent, wxWindowID id, wxString faceValue, wxPoint point, wxSize size);
};
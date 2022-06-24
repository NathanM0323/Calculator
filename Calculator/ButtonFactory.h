#pragma once
#include "wx/wx.h"
class ButtonFactory : public wxButton
{
public:
	ButtonFactory();
	~ButtonFactory();
public:
	// Initalizes the button creation function
	wxButton* CreateButtons(wxWindow* parent, wxWindowID id, wxString faceValue, wxPoint point, wxSize size);
};
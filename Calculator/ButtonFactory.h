#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();
public:
	wxButton* CreateButtons(wxFrame* parent, int id, wxString faceValue, wxPoint point, wxSize size, wxFont font);
};
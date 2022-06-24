#include "ButtonFactory.h"
ButtonFactory::ButtonFactory() {}

ButtonFactory::~ButtonFactory() {}

// Function to take in parameters for each button & create/returns the button
wxButton* ButtonFactory::CreateButtons(wxWindow* parent, wxWindowID id, wxString faceValue, wxPoint point, wxSize size)
{
	wxButton* button = new wxButton(parent, id, faceValue, point, size);

	return button;
}
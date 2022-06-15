#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::CreateButtons(wxFrame* parent, int id, wxString faceValue, wxPoint point, wxSize size, wxFont font)
{
	wxButton* button = new wxButton();
	button->SetParent(parent);
	button->SetId(id);
	button->SetLabel(faceValue);
	button->SetPosition(point);
	button->SetSize(size);
	button->SetFont(font);

	return button;
}
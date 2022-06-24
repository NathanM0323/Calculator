#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
	
public:
	// Initalizing the sizers needed to properly display the calculator
	wxBoxSizer* calculatorSizer = nullptr;
	wxBoxSizer* displaySizer = nullptr;
    wxGridSizer* buttonSizer = nullptr;
	
	// Initalizing the text control for the display of the calculator
	wxTextCtrl* display = nullptr;

	// Initalizing the 0-9 buttons for the calculator
	std::vector<wxButton*> numberButtons;

	// Initalizing the C, Mod, Binary, Hex, Decimal (.), & Sign (+/-) buttons for the calculator
	wxButton* clearButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* binaryButton = nullptr;
	wxButton* hexadecimalButton = nullptr;
	wxButton* decimalButton = nullptr;
	wxButton* signButton = nullptr;
	
	// Initalizing the Plus (+), Subtract (-), Multiply (*), Divide (/), & Equals (=) buttons for the calculator
	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* equalsButton = nullptr;

	// Initalizing the button clicked event for functionality of the calculator 
	void OnButtonClicked(wxCommandEvent& evt);
	
	// Initalizing the variables needed to perform actions of the calculator
	int buttonId = 0;
	int op = 0;
	int i = 0;
	float value = 0;
	wxString result = "";

	// Initalizing the button factory to create the buttons of the calculator
	ButtonFactory factory;
	
	// Initalizing the processor for the operations of the calculator
	CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();	
};
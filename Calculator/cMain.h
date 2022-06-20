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
	// Initalizing the objects needed for the calculator
	CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
	
	ButtonFactory factory;

	wxButton* btnZero = nullptr;
	wxButton* btnOne = nullptr;
	wxButton* btnTwo = nullptr;
	wxButton* btnThree = nullptr;
	wxButton* btnFour = nullptr;
	wxButton* btnFive = nullptr;
	wxButton* btnSix = nullptr;
	wxButton* btnSeven = nullptr;
	wxButton* btnEight = nullptr;
	wxButton* btnNine = nullptr;

	wxButton** buttons;

	wxTextCtrl* resultText = nullptr;

	wxString first = "";
	wxString second = "";
	wxString negative = "";
	wxString result = "";
	wxString results = "";

	int value = 0;
	int Operators = 0;

	double intpart = 0;
	double doubleOperand1;
	double doubleOperand2 = 0;
	double doubleAnswer = 0;

	float answer = 0.0;

	void OnButtonZeroClicked(wxCommandEvent& evt);
	void OnButtonOneClicked(wxCommandEvent& evt);
	void OnButtonTwoClicked(wxCommandEvent& evt);
	void OnButtonThreeClicked(wxCommandEvent& evt);
	void OnButtonFourClicked(wxCommandEvent& evt);
	void OnButtonFiveClicked(wxCommandEvent& evt);
	void OnButtonSixClicked(wxCommandEvent& evt);
	void OnButtonSevenClicked(wxCommandEvent& evt);
	void OnButtonEightClicked(wxCommandEvent& evt);
	void OnButtonNineClicked(wxCommandEvent& evt);
	void OnButtonPlusClicked(wxCommandEvent& evt);
	void OnButtonMinusClicked(wxCommandEvent& evt);
	void OnButtonMultiplyClicked(wxCommandEvent& evt);
	void OnButtonDivideClicked(wxCommandEvent& evt);
	void OnButtonCClicked(wxCommandEvent& evt);
	void OnButtonModClicked(wxCommandEvent& evt);
	void OnButtonBinaryClicked(wxCommandEvent& evt);
	void OnButtonHexClicked(wxCommandEvent& evt);
	void OnButtonDecimalClicked(wxCommandEvent& evt);
	void OnButtonNegativeClicked(wxCommandEvent& evt);
	void OnButtonEqualsClicked(wxCommandEvent& evt);
};
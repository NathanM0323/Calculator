#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	// Initalizing the objects needed for the calculator
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
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnMultiply = nullptr;
	wxButton* btnDivide = nullptr;
	wxButton* btnC = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnBinary = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnDecimal = nullptr;
	wxButton* btnNegative = nullptr;
	wxButton* btnEquals = nullptr;

	wxTextCtrl* resultText = nullptr;

	wxString fast = "";
	wxString last = "";
	wxString negative = "";
	wxString result = "";
	wxString results = "";

	int value = 0;
	int Operand1 = 0;
	int Operand2 = 0;
	int Operators = 0;
	int binaryNum[32];
	int remainder = 1;
	int product = 1;

	double intpart = 0;
	double doubleOperand1;
	double doubleOperand2 = 0;
	double doubleAnswer = 0;

	float answer = 0.0;

	wxDECLARE_EVENT_TABLE();

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
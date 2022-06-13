#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	// Initalizing the objects needed for the calculator
	wxButton* btnZero;
	wxButton* btnOne;
	wxButton* btnTwo;
	wxButton* btnThree;
	wxButton* btnFour;
	wxButton* btnFive;
	wxButton* btnSix;
	wxButton* btnSeven;
	wxButton* btnEight;
	wxButton* btnNine;
	wxButton* btnPlus;
	wxButton* btnMinus;
	wxButton* btnMultiply;
	wxButton* btnDivide;
	wxButton* btnC;
	wxButton* btnMod;
	wxButton* btnBinary;
	wxButton* btnHex;
	wxButton* btnDecimal;
	wxButton* btnNegative;
	wxButton* btnEquals;

	wxTextCtrl* resultText;

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
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

	void OnButtonClicked(wxCommandEvent& evt);
};
#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Nathan Minnick - Calculator", wxPoint(30, 30), wxSize(496, 560))
{
	// Creating the text box and buttons for the calculator
	wxFont fontResult(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont fontButton(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	resultText = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(480, 200));
	resultText->SetFont(fontResult);

	btnC = new wxButton(this, 10, "C", wxPoint(0, 200), wxSize(80, 80));
	btnC->SetFont(fontButton);

	btnMod = new wxButton(this, 20, "Mod", wxPoint(80, 200), wxSize(80, 80));
	btnMod->SetFont(fontButton);

	btnBinary = new wxButton(this, 30, "Binary", wxPoint(160, 200), wxSize(80, 80));
	btnBinary->SetFont(fontButton);

	btnHex = new wxButton(this, 40, "Hex", wxPoint(240, 200), wxSize(80, 80));
	btnHex->SetFont(fontButton);

	btnDecimal = new wxButton(this, 50, ".", wxPoint(320, 200), wxSize(80, 80));
	btnDecimal->SetFont(fontButton);
	
	btnNegative = new wxButton(this, 60, "(-)", wxPoint(400, 200), wxSize(80, 80));
	btnNegative->SetFont(fontButton);

	btnOne = new wxButton(this, 1, "1", wxPoint(0, 280), wxSize(80,80));
	btnOne->SetFont(fontButton);

	btnTwo = new wxButton(this, 2, "2", wxPoint(80, 280), wxSize(80, 80));
	btnTwo->SetFont(fontButton);

	btnThree = new wxButton(this, 3, "3", wxPoint(160, 280), wxSize(80, 80));
	btnThree->SetFont(fontButton);
	
	btnFour = new wxButton(this, 4, "4", wxPoint(240, 280), wxSize(80, 80));
	btnFour->SetFont(fontButton);
	
	btnPlus = new wxButton(this, 70, "+", wxPoint(320, 280), wxSize(80, 80));
	btnPlus->SetFont(fontButton);
	
	btnMinus = new wxButton(this, 80, "-", wxPoint(400, 280), wxSize(80, 80));
	btnMinus->SetFont(fontButton);

	btnFive = new wxButton(this, 5, "5", wxPoint(0, 360), wxSize(80, 80));
	btnFive->SetFont(fontButton);
	
	btnSix = new wxButton(this, 6, "6", wxPoint(80, 360), wxSize(80, 80));
	btnSix->SetFont(fontButton);
	
	btnSeven = new wxButton(this, 7, "7", wxPoint(160, 360), wxSize(80, 80));
	btnSeven->SetFont(fontButton);

	btnEight = new wxButton(this, 8, "8", wxPoint(240, 360), wxSize(80, 80));
	btnEight->SetFont(fontButton);
	
	btnMultiply = new wxButton(this, 90, "*", wxPoint(320, 360), wxSize(80, 80));
	btnMultiply->SetFont(fontButton);
	
	btnDivide = new wxButton(this, 100, "/", wxPoint(400, 360), wxSize(80, 80));
	btnDivide->SetFont(fontButton);

	btnNine = new wxButton(this, 9, "9", wxPoint(0, 440), wxSize(80, 80));
	btnNine->SetFont(fontButton);
	
	btnZero = new wxButton(this, 0, "0", wxPoint(80, 440), wxSize(80, 80));
	btnZero->SetFont(fontButton);
	
	btnEquals = new wxButton(this, 110, "=", wxPoint(160, 440), wxSize(320, 80));
	btnEquals->SetFont(fontButton);
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	evt.Skip();
}
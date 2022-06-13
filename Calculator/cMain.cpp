#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(0, OnButtonZeroClicked)
	EVT_BUTTON(1, OnButtonOneClicked)
	EVT_BUTTON(2, OnButtonTwoClicked)
	EVT_BUTTON(3, OnButtonThreeClicked)
	EVT_BUTTON(4, OnButtonFourClicked)
	EVT_BUTTON(5, OnButtonFiveClicked)
	EVT_BUTTON(6, OnButtonSixClicked)
	EVT_BUTTON(7, OnButtonSevenClicked)
	EVT_BUTTON(8, OnButtonEightClicked)
	EVT_BUTTON(9, OnButtonNineClicked)
	EVT_BUTTON(10, OnButtonCClicked)
	EVT_BUTTON(20, OnButtonModClicked)
	EVT_BUTTON(30, OnButtonBinaryClicked)
	EVT_BUTTON(40, OnButtonHexClicked)
	EVT_BUTTON(50, OnButtonDecimalClicked)
	EVT_BUTTON(60, OnButtonNegativeClicked)
	EVT_BUTTON(70, OnButtonPlusClicked)
	EVT_BUTTON(80, OnButtonMinusClicked)
	EVT_BUTTON(90, OnButtonMultiplyClicked)
	EVT_BUTTON(100, OnButtonDivideClicked)
	EVT_BUTTON(110, OnButtonEqualsClicked)
wxEND_EVENT_TABLE()

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

void cMain::OnButtonZeroClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnZero->GetLabel());
	}
	else
	{
		resultText->AppendText(btnZero->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonOneClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnOne->GetLabel());
	}
	else
	{
		resultText->AppendText(btnOne->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonTwoClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnTwo->GetLabel());
	}
	else
	{
		resultText->AppendText(btnTwo->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonThreeClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnThree->GetLabel());
	}
	else
	{
		resultText->AppendText(btnThree->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonFourClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnFour->GetLabel());
	}
	else
	{
		resultText->AppendText(btnFour->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonFiveClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnFive->GetLabel());
	}
	else
	{
		resultText->AppendText(btnFive->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonSixClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnSix->GetLabel());
	}
	else
	{
		resultText->AppendText(btnSix->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonSevenClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnSeven->GetLabel());
	}
	else
	{
		resultText->AppendText(btnSeven->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonEightClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnEight->GetLabel());
	}
	else
	{
		resultText->AppendText(btnEight->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonNineClicked(wxCommandEvent& evt)
{
	if (resultText->GetValue() == "0")
	{
		resultText->SetValue(btnNine->GetLabel());
	}
	else
	{
		resultText->AppendText(btnNine->GetLabel());
	}
	evt.Skip();
}

void cMain::OnButtonCClicked(wxCommandEvent& evt)
{
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonModClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonBinaryClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonHexClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonDecimalClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonNegativeClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonPlusClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonMinusClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonMultiplyClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonDivideClicked(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnButtonEqualsClicked(wxCommandEvent& evt)
{
	evt.Skip();
}
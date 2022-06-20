#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Nathan Minnick - Calculator", wxPoint(30, 30), wxSize(496, 560))
{
	// Creating the text box and buttons for the calculator
	wxFont fontResult(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont fontButton(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	resultText = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(480, 200));
	resultText->SetFont(fontResult);

	for (int i = 1; i < 21; i++)
	{
		switch (i)
		{
		case 1:
			buttons[i] = factory.CreateButtons(this, 10, "C", wxPoint(0, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonCClicked, this);
			break;
		case 2:
			buttons[i] = factory.CreateButtons(this, 20, "Mod", wxPoint(80, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonModClicked, this);
			break;
		case 3:
			buttons[i] = factory.CreateButtons(this, 30, "Binary", wxPoint(160, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonBinaryClicked, this);
			break;
		case 4:
			buttons[i] = factory.CreateButtons(this, 40, "Hex", wxPoint(240, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonHexClicked, this);
			break;
		case 5:
			buttons[i] = factory.CreateButtons(this, 50, ".", wxPoint(320, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonDecimalClicked, this);
			break;
		case 6:
			buttons[i] = factory.CreateButtons(this, 60, "+/-", wxPoint(400, 200), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonNegativeClicked, this);
			break;
		case 7:
			buttons[i] = factory.CreateButtons(this, 1, "1", wxPoint(0, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonOneClicked, this);
			btnOne = buttons[i];
			break;
		case 8:
			buttons[i] = factory.CreateButtons(this, 2, "2", wxPoint(80, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonTwoClicked, this);
			btnTwo = buttons[i];
			break;
		case 9:
			buttons[i] = factory.CreateButtons(this, 3, "3", wxPoint(160, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonThreeClicked, this);
			btnThree = buttons[i];
			break;
		case 10:
			buttons[i] = factory.CreateButtons(this, 4, "4", wxPoint(240, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonFourClicked, this);
			btnFour = buttons[i];
			break;
		case 11:
			buttons[i] = factory.CreateButtons(this, 70, "+", wxPoint(320, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonPlusClicked, this);
			break;
		case 12:
			buttons[i] = factory.CreateButtons(this, 80, "-", wxPoint(400, 280), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonMinusClicked, this);
			break;
		case 13:
			buttons[i] = factory.CreateButtons(this, 5, "5", wxPoint(0, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonFiveClicked, this);
			btnFive = buttons[i];
			break;
		case 14:
			buttons[i] = factory.CreateButtons(this, 6, "6", wxPoint(80, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonSixClicked, this);
			btnSix = buttons[i];
			break;
		case 15:
			buttons[i] = factory.CreateButtons(this, 7, "7", wxPoint(160, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonSevenClicked, this);
			btnSeven = buttons[i];
			break;
		case 16:
			buttons[i] = factory.CreateButtons(this, 8, "8", wxPoint(240, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonEightClicked, this);
			btnEight = buttons[i];
			break;
		case 17:
			buttons[i] = factory.CreateButtons(this, 90, "*", wxPoint(320, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonMultiplyClicked, this);
			break;
		case 18:
			buttons[i] = factory.CreateButtons(this, 100, "/", wxPoint(400, 360), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonDivideClicked, this);
			break;
		case 19:
			buttons[i] = factory.CreateButtons(this, 9, "9", wxPoint(0, 440), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonNineClicked, this);
			btnNine = buttons[i];
			break;
		case 20:
			buttons[i] = factory.CreateButtons(this, 0, "0", wxPoint(80, 440), wxSize(80, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonZeroClicked, this);
			btnZero = buttons[i];
			break;
		case 21:
			buttons[i] = factory.CreateButtons(this, 110, "=", wxPoint(160, 440), wxSize(320, 80), fontButton);
			buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonEqualsClicked, this);
			break;
		}
	}
}

cMain::~cMain() 
{
	delete[] buttons;
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
	first = "";
	second = "";

	evt.Skip();
}

void cMain::OnButtonModClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetBaseNumber(wxAtoi(first));
	Operators = 5;
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonBinaryClicked(wxCommandEvent& evt)
{	
	first = resultText->GetValue();
	Processor->SetBaseNumber(wxAtoi(first));
	resultText->SetValue(Processor->GetBinary());

	evt.Skip();
}

void cMain::OnButtonHexClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetBaseNumber(wxAtoi(first));
	resultText->SetValue(Processor->GetHexadecimal());

	evt.Skip();
}

void cMain::OnButtonDecimalClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetBaseNumber(wxAtoi(first));
	resultText->SetValue(Processor->GetDecimal());

	evt.Skip();
}

void cMain::OnButtonNegativeClicked(wxCommandEvent& evt)
{
	if (doubleAnswer != 0)
	{
		doubleAnswer *= -1;
		result = wxString::Format(wxT("%.2f"), doubleAnswer);
		resultText->SetValue(result);
	}
	else
	{
		negative = resultText->GetValue();
		value = wxAtoi(negative);
		answer = float(value) * float(-1);
		result = wxString::Format(wxT("%g"), answer);
		resultText->SetValue(result);
	}

	evt.Skip();
}

void cMain::OnButtonPlusClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetFirstValue(wxAtoi(first));
	Operators = 1;
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonMinusClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetFirstValue(wxAtoi(first));
	Operators = 2;
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonMultiplyClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetFirstValue(wxAtoi(first));
	Operators = 3;
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonDivideClicked(wxCommandEvent& evt)
{
	first = resultText->GetValue();
	Processor->SetFirstValue(wxAtoi(first));
	Operators = 4;
	resultText->SetValue("0");
	evt.Skip();
}

void cMain::OnButtonEqualsClicked(wxCommandEvent& evt)
{
	second = resultText->GetValue();
	Processor->SetSecondValue(wxAtoi(second));

	if (doubleOperand1 != NULL)
	{
		doubleOperand2 = wxAtof(second);
	}
	else
	{
		Processor->SetSecondValue(wxAtoi(second));
	}
	
	switch (Operators)
	{
	case 1:
		resultText->SetValue(Processor->GetSum());
		break;
	case 2:
		resultText->SetValue(Processor->GetDifference());
		break;
	case 3:
		resultText->SetValue(Processor->GetProduct());
		break;
	case 4:
		resultText->SetValue(Processor->GetQuotient());
		break;
	case 5:
		resultText->SetValue(Processor->GetRemainder());
		break;
	case 6:
		doubleAnswer = doubleOperand1 + (doubleOperand2 * .01);
		result = wxString::Format(wxT("%.2f"), doubleAnswer);
		resultText->SetValue(result);
		break;
	}
	
	evt.Skip();
}
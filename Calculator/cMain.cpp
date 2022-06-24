#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Nathan Minnick - Calculator", wxDefaultPosition, wxSize(496, 510), wxCLOSE_BOX | wxCAPTION)
{
	// Setting the fonts for the display and buttons for the calculator
	wxFont fontResult(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont fontButton(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	// Setting the sizes needed for the buttons of the calculator
	wxSize buttonSize(80, 80);
	wxSize equalButtonSize(320, 80);

	// Creating the sizers needed for the calculator
	calculatorSizer = new wxBoxSizer(wxVERTICAL);
	displaySizer = new wxBoxSizer(wxHORIZONTAL);
	buttonSizer = new wxGridSizer(6, 0, 0);

	// Sets the sizer of the wxFrame to calculator sizer
	SetSizer(calculatorSizer);

	// Creating, disabling, & setting the font for the display of the calculator
	display = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(200, 150), wxTE_RIGHT);
	display->Disable();
	display->SetFont(fontResult);

	// Adding the display to the display sizer
	displaySizer->Add(display, 1, wxEXPAND | wxALL);

	// Adding the display sizer to the calculator sizer
	calculatorSizer->Add(displaySizer, 0, wxEXPAND | wxALL);

	// Setting the size of the vector of wxButtons to 10 buttons
	numberButtons.resize(10);

	// Looping through the vector to create, bind, & set the font of the 10 number buttons of the calculator
	for (int i = 0; i < 10; ++i)
	{
		numberButtons[i] = factory.CreateButtons(this, i, std::to_string(i), wxDefaultPosition, buttonSize);
		numberButtons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
		numberButtons[i]->SetFont(fontButton);
	}

	// Creating, binding & setting the font of the C button of the calculator
	clearButton = factory.CreateButtons(this, 100, "C", wxDefaultPosition, buttonSize);;
	clearButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	clearButton->SetFont(fontButton);

	// Creating, binding & setting the font of the Mod button of the calculator
	modButton = factory.CreateButtons(this, 200, "Mod", wxDefaultPosition, buttonSize);
	modButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	modButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Binary button of the calculator
	binaryButton = factory.CreateButtons(this, 300, "Binary", wxDefaultPosition, buttonSize);
	binaryButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	binaryButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Hex button of the calculator
	hexadecimalButton = factory.CreateButtons(this, 400, "Hex", wxDefaultPosition, buttonSize);
	hexadecimalButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	hexadecimalButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Decimal (.) button of the calculator
	decimalButton = factory.CreateButtons(this, 500, ".", wxDefaultPosition, buttonSize);
	decimalButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	decimalButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Sign (+/-) button of the calculator
	signButton = factory.CreateButtons(this, 600, "+/-", wxDefaultPosition, buttonSize);
	signButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	signButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Plus (+) button of the calculator
	addButton = factory.CreateButtons(this, 700, "+", wxDefaultPosition, buttonSize);
	addButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	addButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Subtract (-) button of the calculator
	subtractButton = factory.CreateButtons(this, 800, "-", wxDefaultPosition, buttonSize);
	subtractButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	subtractButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Multiply (*) button of the calculator
	multiplyButton = factory.CreateButtons(this, 900, "*", wxDefaultPosition, buttonSize);
	multiplyButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	multiplyButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Divide (/) button of the calculator
	divideButton = factory.CreateButtons(this, 1000, "/", wxDefaultPosition, buttonSize);
	divideButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	divideButton->SetFont(fontButton);
	
	// Creating, binding & setting the font of the Equals (=) button of the calculator
	equalsButton = factory.CreateButtons(this, 1100, "=", wxDefaultPosition, equalButtonSize);
	equalsButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	equalsButton->SetFont(fontButton);
	
	// Adding the C button to the button sizer
	buttonSizer->Add(clearButton, 0, wxEXPAND | wxALL);
	
	// Adding the Mod button to the button sizer
	buttonSizer->Add(modButton, 0, wxEXPAND | wxALL);
	
	// Adding the Binary button to the button sizer
	buttonSizer->Add(binaryButton, 0, wxEXPAND | wxALL);
	
	// Adding the Hex button to the button sizer
	buttonSizer->Add(hexadecimalButton, 0, wxEXPAND | wxALL);
	
	// Adding the Decimal (.) button to the button sizer
	buttonSizer->Add(decimalButton, 0, wxEXPAND | wxALL);
	
	// Adding the Sign (+/-) button to the button sizer
	buttonSizer->Add(signButton, 0, wxEXPAND | wxALL);

	// Loops through the 1-4 buttons to add them to the button sizer
	for (int i = 1; i <= 4; ++i)
	{
		buttonSizer->Add(numberButtons[i], 0, wxEXPAND | wxALL);
	}

	// Adding the Plus (+) button to the button sizer
	buttonSizer->Add(addButton, 0, wxEXPAND | wxALL);
	
	// Adding the Subtract (-) button to the button sizer
	buttonSizer->Add(subtractButton, 0, wxEXPAND | wxALL);

	// Loops through the 5-8 buttons to add them to the button sizer
	for (int i = 5; i <= 8; ++i)
	{
		buttonSizer->Add(numberButtons[i], 0, wxEXPAND | wxALL);
	}

	// Adding the Multiply (*) button to the button sizer
	buttonSizer->Add(multiplyButton, 0, wxEXPAND | wxALL);
	
	// Adding the Divide (/) button to the button sizer
	buttonSizer->Add(divideButton, 0, wxEXPAND | wxALL);

	// Adding the 9 button to the button sizer
	buttonSizer->Add(numberButtons[9], 0, wxEXPAND | wxALL);
	
	// Adding the 0 button to the button sizer
	buttonSizer->Add(numberButtons[0], 0, wxEXPAND | wxALL);

	// Adding the Equals (=) button to the button sizer
	buttonSizer->Add(equalsButton, 0, wxEXPAND * 4 | wxALL);

	// Adding the button sizer to the calculator sizer
	calculatorSizer->Add(buttonSizer, 0, wxEXPAND | wxALL);
}

cMain::~cMain() {}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	// Retrives the id of the button clicked
	buttonId = evt.GetId();

	// Determines what actions to take based on the id of the button clicked
	switch (buttonId)
	{
		// If the 0 button is clicked
		case 0:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("0");
			}
			else
			{
				display->AppendText("0");
			}
		break;

		// If the 1 button is clicked
		case 1:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("1");
			}
			else
			{
				display->AppendText("1");
			}
		break;

		// If the 2 button is clicked
		case 2:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("2");
			}
			else
			{
				display->AppendText("2");
			}
		break;

		// If the 3 button is clicked
		case 3:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("3");
			}
			else
			{
				display->AppendText("3");
			}
		break;

		// If the 4 button is clicked
		case 4:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("4");
			}
			else
			{
				display->AppendText("4");
			}
		break;

		// If the 5 button is clicked
		case 5:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("5");
			}
			else
			{
				display->AppendText("5");
			}
		break;

		// If the 6 button is clicked
		case 6:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("6");
			}
			else
			{
				display->AppendText("6");
			}
		break;

		// If the 7 button is clicked
		case 7:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("7");
			}
			else
			{
				display->AppendText("7");
			}
		break;

		// If the 8 button is clicked
		case 8:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("8");
			}
			else
			{
				display->AppendText("8");
			}
		break;

		// If the 9 button is clicked
		case 9:
			// If the display value is zero, replace it. Else, add the button value to the display
			if (display->GetValue() == "0")
			{
				display->SetValue("9");
			}
			else
			{
				display->AppendText("9");
			}
		break;

		// If the C button is clicked
		case 100:
			// Sets the display back to zero
			display->SetLabelText("0");

			// Resets all variables
			result = "";
			value = 0;
			op = 0;
			i = 0;
		break;

		// If the Mod button is clicked
		case 200:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the first value for calculation into the processor
			Processor->SetFirstValue(value);

			// Sets the operation being performed
			op = 5;

			// Sets the display back to 0 to retrieve the other operation number
			display->SetValue("0");
		break;
		
		// If the Binary button is clicked
		case 300:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sends the value to the processor to be converted
			Processor->SetBaseNumber(value);

			// Displays the result
			display->SetValue(Processor->GetBinary());
		break;
		
		// If the Hex button is clicked
		case 400:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));
	
			// Sends the value to the processor to be converted
			Processor->SetBaseNumber(value);

			// Displays the result
			display->SetValue(Processor->GetHexadecimal());
		break;
		
		// If the Decimal (.) button is clicked
		case 500:
			// Adds a decimal point to the display value
			display->AppendText(".");
		break;
		
		// If the Sign (+/-) button is clicked
		case 600:
			// Sets the value of the display number to itself * -1
			value = (wxAtof(display->GetValue()) * -1);

			// Converts the value to a wxString to 2 decimal points
			result = wxString::Format(wxT("%.2f"), value);

			// Displays the value
			display->SetValue(result);
		break;
		
		// If the Plus (+) button is clicked
		case 700:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the first value for calculation into the processor
			Processor->SetFirstValue(value);

			// Sets the operation being performed
			op = 1;

			// Sets the display back to 0 to retrieve the other operation number
			display->SetValue("0");
		break;
		
		// If the Subtract (-) button is clicked
		case 800:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the first value for calculation into the processor
			Processor->SetFirstValue(value);

			// Sets the operation being performed
			op = 2;

			// Sets the display back to 0 to retrieve the other operation number
			display->SetValue("0");
		break;
		
		// If the Multiply (*) button is clicked
		case 900:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the first value for calculation into the processor
			Processor->SetFirstValue(value);

			// Sets the operation being performed
			op = 3;

			// Sets the display back to 0 to retrieve the other operation number
			display->SetValue("0");
		break;
		
		// If the Divide (/) button is clicked
		case 1000:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the first value for calculation into the processor
			Processor->SetFirstValue(value);

			// Sets the operation being performed
			op = 4;

			// Sets the display back to 0 to retrieve the other operation number
			display->SetValue("0");
		break;
		
		// If the Equals (=) button is clicked
		case 1100:
			// Retrieves the value of the display number
			value = (wxAtof(display->GetValue()));

			// Sets the second value to the processor
			Processor->SetSecondValue(value);

			// Checks to see which operation to perform based on the operation number
			switch (op)
			{
				// If Plus (+) is selected
				case 1:
					// The processor performs the calculation and returns the result
					display->SetValue(Processor->GetSum());
				break;

				// If Subtract (-) is selected
				case 2:
					// The processor performs the calculation and returns the result
					display->SetValue(Processor->GetDifference());
				break;

				// If Multiply (*) is selected
				case 3:
					// The processor performs the calculation and returns the result
					display->SetValue(Processor->GetProduct());
				break;

				// If Divide (/) is selected
				case 4:
					// The processor performs the calculation and returns the result
					display->SetValue(Processor->GetQuotient());
				break;

				// If Mod is selected
				case 5:
					// The processor performs the calculation and returns the result
					display->SetValue(Processor->GetRemainder());
				break;
			}

		break;
	}

	evt.Skip();
}
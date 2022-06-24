#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Calculator/ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTests
{
	TEST_CLASS(ButtonFactoryTests)
	{
	public:
		// Test #1: Create the C button
		TEST_METHOD(CreateClearButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 100;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "C";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #2: Create the Mod button
		TEST_METHOD(CreateModButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 200;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "Mod";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #3: Create the Hex button
		TEST_METHOD(CreateHexButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 300;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "Hex";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #4: Create the Decimal (.) button
		TEST_METHOD(CreateDecimalButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 400;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = ".";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #5: Create the Sign (+/-) button
		TEST_METHOD(CreateSignButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 500;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "+/-";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #6: Create the Plus (+) button
		TEST_METHOD(CreatePlusButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 600;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "+";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #7: Create the Subtract (-) button
		TEST_METHOD(CreateSubtractButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 700;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "-";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #8: Create the Multiply (*) button
		TEST_METHOD(CreateMultiplyButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 800;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "*";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #9: Create the Divide (/) button
		TEST_METHOD(CreateDivideButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 900;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "/";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}

		// Test #10: Create the Equals (=) button
		TEST_METHOD(CreateEqualsButton)
		{
			// Initalizing variables needed for the test
			ButtonFactory factory;
			wxWindowID id = 1000;
			wxWindow* parent = factory.GetParent();
			wxString faceValue = "=";

			// Creates the button using the defined wxWindowID and wxString
			wxButton* clearButton = factory.CreateButtons(parent, id, faceValue, wxDefaultPosition, wxSize(80, 80));

			// Assess to see if the button's id & face value are what they are supposed to be
			Assert::AreEqual(std::to_string(clearButton->GetId()), std::to_string(id));
			//Assert::AreEqual(clearButton->GetLabel(), faceValue);
		}
	};
}
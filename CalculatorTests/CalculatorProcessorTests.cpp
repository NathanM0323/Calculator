#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTests
{
	TEST_CLASS(CalculatorProcessorTests)
	{
	public:
		// Test #1: Deciaml to Hexadecimal Conversion #1
		TEST_METHOD(HexadecimalConversionOne)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 123;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetHexadecimal();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "0x7B");
		}

		// Test #2: Deciaml to Hexadecimal Conversion #2
		TEST_METHOD(HexadecimalConversionTwo)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 56;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetHexadecimal();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "0x38");
		}

		// Test #3: Deciaml to Hexadecimal Conversion #3
		TEST_METHOD(HexadecimalConversionThree)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 78;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetHexadecimal();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "0x4E");
		}

		// Test #4: Deciaml to Binary Conversion #1
		TEST_METHOD(BinaryConversionOne)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 28;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetBinary();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "11100");
		}

		// Test #5: Deciaml to Binary Conversion #2
		TEST_METHOD(BinaryConversionTwo)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 34;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetBinary();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "100010");
		}

		// Test #6: Deciaml to Binary Conversion #3
		TEST_METHOD(BinaryConversionThree)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float testValue = 88;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetBaseNumber(testValue);

			// Sets the result to the string
			result = Processor->GetBinary();

			// Determines if the value was converted successfully
			Assert::AreEqual(result, "1011000");
		}

		// Test #7: Addition Calculation
		TEST_METHOD(AdditionCalculation)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float firstValue = 12;
			float secondValue = 5;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetFirstValue(firstValue);
			Processor->SetSecondValue(secondValue);

			// Sets the result to the string
			result = Processor->GetSum();

			// Determines if the values were added together successfully
			Assert::AreEqual(result, "17.00");
		}

		// Test #8: Subtraction Calculation
		TEST_METHOD(SubtractionCalculation)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float firstValue = 10;
			float secondValue = 8;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetFirstValue(firstValue);
			Processor->SetSecondValue(secondValue);

			// Sets the result to the string
			result = Processor->GetDifference();

			// Determines if the values were subtracted from each other successfully
			Assert::AreEqual(result, "2.00");
		}

		// Test #9: Multiplication Calculation
		TEST_METHOD(MultiplcationCalculation)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float firstValue = 25;
			float secondValue = 5;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetFirstValue(firstValue);
			Processor->SetSecondValue(secondValue);

			// Sets the result to the string
			result = Processor->GetProduct();

			// Determines if the values were multiplied successfully
			Assert::AreEqual(result, "125.00");
		}

		// Test #10: Division Calculation
		TEST_METHOD(DivisionCalculation)
		{
			// Initalizing the variables needed for the test
			CalculatorProcessor* Processor = CalculatorProcessor::GetInstance();
			float firstValue = 10;
			float secondValue = 5;
			wxString result = "";

			// Sends the value to be converted
			Processor->SetFirstValue(firstValue);
			Processor->SetSecondValue(secondValue);

			// Sets the result to the string
			result = Processor->GetQuotient();

			// Determines if the values were divided from each other successfully
			Assert::AreEqual(result, "2.00");
		}
	};
}

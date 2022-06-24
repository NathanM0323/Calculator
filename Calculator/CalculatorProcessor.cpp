#define _CRT_SECURE_NO_WARNINGS
#include "CalculatorProcessor.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"

// Initalizing the processor
CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

// Checks to see if the processor is nullptr. If it is not then initalize & return it 
CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_processor == nullptr)
	{
		_processor = new CalculatorProcessor();
	}
	return _processor;
}

// Sets the first value for calculations
void CalculatorProcessor::SetFirstValue(float number)
{
	firstValue = number;
}

// Sets the second value for calculations
void CalculatorProcessor::SetSecondValue(float number)
{
	secondValue = number;
}

// Sets the base number for conversions
void CalculatorProcessor::SetBaseNumber(float number)
{
	baseNumber = number;
}

// Performs the sum operation
std::string CalculatorProcessor::GetSum()
{
	// Initalizing the result string
	std::string result = "";

	// Sends the two values to be added together 
	AddCommand addCommand(firstValue, secondValue);

	// Adds the command to the vector
	commands.push_back(&addCommand);

	// Sets the result string to the value in the vector
	for (int i = 0; i < commands.size(); i++) {
		result = commands[i]->Execute();
	}
	
	// Empties the vector 
	commands.clear();

	// Returns the result string
	return result;
}

// Performs the difference operation
std::string CalculatorProcessor::GetDifference()
{
	// Initalizing the result string
	std::string result = "";

	// Sends the two values to be subtracted from each other 
	SubtractCommand subtractCommand(firstValue, secondValue);

	// Adds the command to the vector
	commands.push_back(&subtractCommand);

	// Sets the result string to the value in the vector
	for (int i = 0; i < commands.size(); i++) {
		result = commands[i]->Execute();
	}

	// Empties the vector 
	commands.clear();

	// Returns the result string
	return result;
}

// Performs the product operation
std::string CalculatorProcessor::GetProduct()
{
	// Initalizing the result string
	std::string result = "";

	// Sends the two values to be multipled together 
	MultiplyCommand multiplyCommand(firstValue, secondValue);

	// Adds the command to the vector
	commands.push_back(&multiplyCommand);

	// Sets the result string to the value in the vector
	for (int i = 0; i < commands.size(); i++) {
		result = commands[i]->Execute();
	}

	// Empties the vector 
	commands.clear();

	// Returns the result string
	return result;
}

// Performs the quotient operation
std::string CalculatorProcessor::GetQuotient()
{
	// Initalizing the result string
	std::string result = "";

	// Sends the two values to be divided by each other 
	DivideCommand divideCommand(firstValue, secondValue);

	// Adds the command to the vector
	commands.push_back(&divideCommand);

	// Sets the result string to the value in the vector
	for (int i = 0; i < commands.size(); i++) {
		result = commands[i]->Execute();
	}

	// Empties the vector 
	commands.clear();

	// Returns the result string
	return result;
}

// Performs the remainder operation
std::string CalculatorProcessor::GetRemainder()
{
	// Initalizing variables needed 
	std::string results = "";
	float firstNumber = firstValue;
	float secondNumber = secondValue;
	float remainder = 0;

	// Performs the calculation and sets the result to the result string
	remainder = int(firstNumber) % int(secondNumber);
	results = wxString::Format(wxT("%g"), remainder);

	// Returns the result
	return results;
}

// Performs the hexadecimal conversion
std::string CalculatorProcessor::GetHexadecimal()
{
	// Initalizing the variables needed
	std::string results = "";
	float baseValue = baseNumber;
	char hexadecimalNumber[20];

	// Adds 0x to the result string
	results += "0x";

	// Converts the value to hexadecimal
	sprintf(hexadecimalNumber, "%X", int(baseValue));

	// Adds the hexadeciaml number to the result string
	results += hexadecimalNumber;

	// Returns the result
	return results;
}

// Performs the binary conversion
std::string CalculatorProcessor::GetBinary()
{
	// Initalizing the variables needed
	std::string results = "";
	float baseValue = baseNumber;
	int mod = 0;
	int binary = 0;
	int product = 1;

	// Performs the conversion
	while (baseValue != 0)
	{
		// Gets the remainder after the number is divided by 2
		mod = int(baseValue) % 2;

		// Sets the binary value to itself + the remainder * product 
		binary += (mod * product);

		// Sets the value to itself / 2
		baseValue /= 2;

		// Sets the product to itself * 10
		product *= 10;
	}

	// Sets the results to the result string
	results = std::to_string(binary);

	// Returns the result
	return results;
}
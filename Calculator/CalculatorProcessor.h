#pragma once
#include "wx/wx.h"
#include "IBaseCommand.h"

class CalculatorProcessor
{
private:
	// Creates variables for calculations
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	float baseNumber = 0;
	float firstValue = 0;
	float secondValue = 0;
	
	// Initalizing the commands
	std::vector<IBaseCommand*> commands;

public:
	// Gets the processor
	static CalculatorProcessor* GetInstance();

	// Sets the first value for calculation
	void SetFirstValue(float number);

	// Sets the second value for calculation
	void SetSecondValue(float number);

	// Sets the base number for conversions
	void SetBaseNumber(float number);

	// Deletes the processor and operators
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator = (const CalculatorProcessor& other) = delete;

	// Creates the sum calculation
	std::string GetSum();

	// Creates the difference calculation
	std::string GetDifference();

	// Creates the product calculation
	std::string GetProduct();

	// Creates the quotient calculation
	std::string GetQuotient();

	// Creates the remainder calculation
	std::string GetRemainder();

	// Creates the hexadecimal conversion
	std::string GetHexadecimal();

	// Creates the binary conversion
	std::string GetBinary();
};
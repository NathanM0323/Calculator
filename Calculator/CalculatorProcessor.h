#pragma once
#include "wx/wx.h"
#include "IBaseCommand.h"

class CalculatorProcessor
{
private:
	// Creates variables for calculations
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	int baseNumber = 0;
	int firstValue = 0;
	int secondValue = 0;

	// Initalizing the commands
	std::vector<IBaseCommand*> commands;

public:
	// Gets the processor
	static CalculatorProcessor* GetInstance();

	// Sets the first value for calculation
	void SetFirstValue(int number);

	// Sets the second value for calculation
	void SetSecondValue(int number);

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
};
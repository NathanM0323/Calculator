#pragma once
#include <string>

class CalculatorProcessor
{
private:
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	int baseNumber = 0;
	int firstValue = 0;
	int secondValue = 0;

public:
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	void SetBaseNumber(int number) 
	{
		baseNumber = number;
	}

	void SetFirstValue(int number)
	{
		firstValue = number;
	}

	void SetSecondValue(int number)
	{
		secondValue = number;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator = (const CalculatorProcessor& other) = delete;

	std::string GetSum()
	{
		std::string results = "";
		int firstNumber = firstValue;
		int secondNumber = secondValue;
		int sum = 0;

		sum = firstNumber + secondNumber;
		results = wxString::Format(wxT("%g"), sum);

		return results;
	}

	std::string GetDifference()
	{
		std::string results = "";
		int firstNumber = firstValue;
		int secondNumber = secondValue;
		int difference = 0;

		difference = firstNumber - secondNumber;
		results = wxString::Format(wxT("%g"), difference);

		return results;
	}

	std::string GetProduct()
	{
		std::string results = "";
		int firstNumber = firstValue;
		int secondNumber = secondValue;
		int product = 0;

		product = firstNumber * secondNumber;
		results = wxString::Format(wxT("%g"), product);

		return results;
	}

	std::string GetQuotient()
	{
		std::string results = "";
		int firstNumber = firstValue;
		int secondNumber = secondValue;
		int quotient = 0;

		quotient = firstNumber / secondNumber;
		results = wxString::Format(wxT("%g"), quotient);

		return results;
	}

	std::string GetRemainder()
	{
		std::string results = "";
		int firstNumber = firstValue;
		int secondNumber = secondValue;
		int remainder = 0;

		remainder = firstNumber % secondNumber;
		results = wxString::Format(wxT("%g"), remainder);

		return results;
	}

	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}

	std::string GetHexadecimal()
	{
		std::string results = "";
		int number = baseNumber;

		while (number > 0)
		{
			int mod = number % 16;
			if (mod > 10)
			{
				results += std::to_string(mod);
			}
			else if (mod == 10)
			{
				results += "A";
			}
			else if (mod == 11)
			{
				results += "B";
			}
			else if (mod == 12)
			{
				results += "C";
			}
			else if (mod == 13)
			{
				results += "D";
			}
			else if (mod == 14)
			{
				results += "E";
			}
			else if (mod == 15)
			{
				results += "F";
			}
			
			number /= 16;
		}

		results += "0x";

		return results;
	}

	std::string GetBinary()
	{
		std::string results = "";
		int number = baseNumber;

		for (int i = 0; i < 32; i++)
		{
			if (number % 2 == 0)
			{
				results += "0";
			}
			else
			{
				results += "1";
			}

			number /= 2;
		}

		return results;
	}

};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;
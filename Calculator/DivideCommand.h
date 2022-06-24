#pragma once
#include "IBaseCommand.h"

class DivideCommand : public IBaseCommand
{
private:
	// Initalizing the variables needed
	float _firstValue = 0;
	float _secondValue = 0;
	float quotient = 0;
	std::string results = "";

public:
	// Sets the two values needed & performs the calculation
	DivideCommand(float first, float second)
	{
		_firstValue = first;
		_secondValue = second;
		quotient = _firstValue / _secondValue;
	}

	// Returns the result
	std::string Execute()
	{
		results = wxString::Format(wxT("%.2f"), quotient);
	
		return results;
	}
};
#pragma once
#include "IBaseCommand.h"

class SubtractCommand : public IBaseCommand
{
private:
	// Initalizing the variables needed
	float _firstValue = 0;
	float _secondValue = 0;
	float difference = 0;
	std::string results = "";

public:
	// Sets the two values needed & performs the calculation
	SubtractCommand(float first, float second)
	{
		_firstValue = first;
		_secondValue = second;
		difference = _firstValue - _secondValue;
	}

	// Returns the result
	std::string Execute()
	{
		results = wxString::Format(wxT("%.2f"), difference);
	
		return results;
	}
};
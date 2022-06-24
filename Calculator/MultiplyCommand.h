#pragma once
#include "IBaseCommand.h"

class MultiplyCommand : public IBaseCommand
{
private:
	// Initalizing the variables needed
	float _firstValue = 0;
	float _secondValue = 0;
	float product = 0;
	std::string results = "";

public:
	// Sets the two values needed & performs the calculation
	MultiplyCommand(float first, float second)
	{
		_firstValue = first;
		_secondValue = second;
		product = _firstValue * _secondValue;
	}

	// Returns the result
	std::string Execute()
	{
		results = wxString::Format(wxT("%.2f"), product);
	
		return results;
	}
};
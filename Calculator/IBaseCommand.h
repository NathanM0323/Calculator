#pragma once

class IBaseCommand
{
public:
	// Initalizing the Execute function
	virtual std::string Execute() = 0;
};
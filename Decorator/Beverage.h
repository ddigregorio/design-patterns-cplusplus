#pragma once

#include <iostream>
#include <string>


class Beverage
{
	//std::string description = "Unknown";

public:
	virtual std::string getDescription() = 0;
	virtual double cost() = 0;
};


#pragma once


#include "Beverage.h"


class Espresso : public Beverage
{
	
public:


	virtual std::string getDescription() override;
	virtual double cost() override;

};


#pragma once


//#include "Beverage.h"

#include "Condiments.h"

class Mocha : public Condiments
{
	//Beverage* beverage;

public:
	Mocha(Beverage* bev); // : Condiments(beverage) {};

	virtual std::string getDescription() override;
	virtual double cost() override;


};


#pragma once


#include "Beverage.h"
#include "Condiments.h"


class HouseBlend : public Beverage
{

public:
	//HouseBlend(Beverage* bev);


	virtual std::string getDescription() override;
	virtual double cost() override;

};


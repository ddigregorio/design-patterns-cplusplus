#pragma once


#include "Condiments.h"


class Milk : public Condiments
{

public:
	Milk(Beverage* bev);

	virtual std::string getDescription() override;
	virtual double cost() override;
};


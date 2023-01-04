#pragma once

#include <iostream>
#include "Beverage.h"


// Decorator


class Condiments : public Beverage
{

public:
	// constructor with initializer that stores the beverage. 
	Condiments(Beverage* bev) : m_beverage{ bev } {};
	//~Condiments() { delete m_beverage; }

	std::string getDescription() override { return m_beverage->getDescription(); };
	double cost() override { return m_beverage->cost(); };

protected:
	Beverage* m_beverage;
};


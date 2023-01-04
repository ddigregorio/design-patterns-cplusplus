
#include "Mocha.h"


Mocha::Mocha(Beverage* bev) : Condiments{bev}
{

}


std::string Mocha::getDescription()
{
	return m_beverage->getDescription() + ", Mocha";
}


double Mocha::cost()
{
	return m_beverage->cost() + 0.20;
}

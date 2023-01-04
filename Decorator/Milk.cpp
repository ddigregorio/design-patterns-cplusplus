#include "Milk.h"



Milk::Milk(Beverage* bev) : Condiments{ bev }
{

}

std::string Milk::getDescription()
{
	return m_beverage->getDescription() + ", milk";
}


double Milk::cost()
{
	return m_beverage->cost() + 0.33;
}

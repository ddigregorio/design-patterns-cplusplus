// Decorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Beverage.h"
#include "Condiments.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"


int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Decorator Pattern\n";

    Beverage* bev1 = new Espresso;

    std::cout << "Drink (bev1): " << bev1->getDescription() << " @ $" << bev1->cost() << std::endl;


    Beverage* bev2 = new HouseBlend;
    bev2 = new Mocha(bev2);

    std::cout << "Drink (bev2): " << bev2->getDescription() << " @ $" << bev2->cost() << std::endl;


    bev2 = new Milk(bev2);
    std::cout << "Drink (bev2): " << bev2->getDescription() << " @ $" << bev2->cost() << std::endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

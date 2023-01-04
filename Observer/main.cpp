// Observer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Client.h"
#include "WeatherStation.h"


using namespace std;


int main()
{
    std::cout << "Hello World!\n";

    WeatherStation ws;
    Client one(1), two(2), three(3);

    float temp, humidity, pressure;

    // regester the observers
    ws.registerObserver(&one);
    ws.registerObserver(&two);
    ws.registerObserver(&three);

    std::cout << "Enter temp, humidity, pressure. " << endl;
    std::cin >> temp >> humidity >> pressure;

    ws.setState(temp, humidity, pressure);

    
    
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

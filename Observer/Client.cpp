#include "Client.h"

#include <iostream>

Client::Client(int id)
{
	this->id = id;
}


void Client::update(float temp, float humidity, float pressure)
{
	std::cout << "client(" << id << ") -- Temp= " << temp
		<< ", Humidity= " << humidity << ", Pressure= " << pressure
		<< std::endl;

}
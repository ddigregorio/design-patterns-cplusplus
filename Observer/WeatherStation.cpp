#include "WeatherStation.h"



void WeatherStation::registerObserver(Observer* obs)
{
	observers.push_back(obs);

}


void WeatherStation::removeObserver(Observer* obs)
{
	auto iterator = std::find(observers.begin(), observers.end(), obs);
	
	if (iterator != observers.end())
	{
		observers.erase(iterator);
	}
}


void WeatherStation::notifyObserver() 
{
	for (auto obs : observers )
	{
		obs->update(temp, humidity, pressure);
	}
}


void WeatherStation::setState(float temp, float humidity, float pressure)
{
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;

	std::cout << std::endl;

	notifyObserver();

}





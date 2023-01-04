#pragma once
#include "Subject.h"

#include <algorithm>
#include <iostream>
#include <vector>


class WeatherStation : public Subject
{
	std::vector<Observer*> observers;

	float temp = 0.0;
	float humidity = 0.0;
	float pressure = 0.0;


public:
	virtual void registerObserver(Observer* obs) override;

	virtual void removeObserver(Observer* obs) override;

	virtual void notifyObserver() override;

	void setState(float temp, float humidity, float pressure);


};


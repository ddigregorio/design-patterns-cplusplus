#pragma once


#include "Observer.h"


class Client : public Observer
{
	int id;
public:

	Client(int id);
	virtual void update(float temp, float humidity, float pressure) override;
	

};


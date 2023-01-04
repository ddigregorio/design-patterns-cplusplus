#pragma once

#include "Observer.h"


class Subject
{

public:
	virtual void registerObserver(Observer* obs) = 0;

	virtual void removeObserver(Observer* obs) = 0;

	virtual void notifyObserver() = 0; 

};


#pragma once

#include "IObserver.h"

class IObservable {
	virtual void registerObserver(IObserver* observer) = 0;
	virtual void unregisterObserver(IObserver* observer) = 0;
	virtual void notifyObservers() = 0;
};
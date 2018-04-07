/*
File: PrototypeManager.h
Purpose: Definition of singleton class PrototypeManager. PrototypeManager creates the right concrete prototype object. 
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include "Beverage.h"
#include "DrinkPrototype.h"
#include "DecoratorPrototype.h"
#include <memory>

using namespace std;

class PrototypeManager {
private:
	PrototypeManager() {
		drinkPrototype = shared_ptr<DrinkPrototype>(new DrinkPrototype());
		decoratorPrototype = shared_ptr<DecoratorPrototype>(new DecoratorPrototype());
	}
	static PrototypeManager *prototypeManager; // The instance

	shared_ptr<DrinkPrototype>drinkPrototype = nullptr;
	shared_ptr<DecoratorPrototype>decoratorPrototype = nullptr;

public:
	static PrototypeManager* instance() {
		if (prototypeManager == nullptr) {
			prototypeManager = new PrototypeManager();
		}
		return prototypeManager;
	}
	virtual ~PrototypeManager() { }
	//Function that destroy the instance
	void destroySingleton() { if (prototypeManager) { delete prototypeManager; prototypeManager = nullptr; } }

	shared_ptr<Beverage> getDrink(string name, int price);
	shared_ptr<Beverage> getDecorator(shared_ptr<Beverage> b, string name, int price);

};



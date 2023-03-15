#pragma once
#include "Dog.h"
#include <iostream>

class DogWithStripes : public Dog {
public:
	
	int getNumberStripes();
	void displayDogWithStripes();
private: 
	int NumberStripes;
		
};




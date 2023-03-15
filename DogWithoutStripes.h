#pragma once
#include "Dog.h"
#include<iostream>

class DogWithoutStripes : public Dog {
public:
	void display();
private:
	int NumberStripes;

};
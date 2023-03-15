#include "Dog.h"
#include "DogWithStripes.h"
#include "DogWithoutStripes.h"
#include <iostream>

using namespace std;

int main()
{
    DogWithoutStripes GermanSepherd;
GermanSepherd.display();
DogWithStripes DalmatianDog;
DalmatianDog.displayDogWithStripes();
}


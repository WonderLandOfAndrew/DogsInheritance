#include "Dog.h"
#include "DogWithStripes.h"
#include "DogWithoutStripes.h"
#include <iostream>

using namespace std;

string Dog::getname() {
	string dogName;
	cout << "Dog's name is:" <<endl;
	cin >> dogName;
	return dogName;
}

int  Dog::getheight() {
	int dogHeight;
	cout << "Dog's height is" << endl;
	cin >> dogHeight;
	return dogHeight;
}

int  Dog::getweight() {
	int dogWeight;
	cout << "Dog's weight is" << endl;
	cin >> dogWeight;
		return dogWeight;
}

int  Dog::getage() {
	int dogAge;
	cout << "Dog's age is" << endl;
	cin >> dogAge;
	return dogAge;
}

string  Dog::getcolour(){
	string dogColour;
	cout << "Dog's colour is" << endl;
	cin >> dogColour;

	return dogColour;
}
int  DogWithStripes::getNumberStripes() {
	int dogNumberStripes;
	cout << "Dog's number of stripes" << endl ;
	cin >> dogNumberStripes;

	return dogNumberStripes;
}

void DogWithoutStripes::display() {
	string name = getname();
	int height = getheight();
	int weight = getweight();
	int age = getage();
	string colour = getcolour();
	cout << name << endl << height << endl << weight << endl << age << endl << colour << endl;

}
void DogWithStripes::displayDogWithStripes() {
	int Stripes = getNumberStripes();
	cout << Stripes << endl;
}
#pragma once
#include<iostream>
#include <string>
using namespace std;

class Dog  {
public:
	
	string getname();
	int getheight();
	int getweight();
	int getage();
	string getcolour();
	
protected:
	string name;
	int height;
	int weight;
	int age;
	string colour;
};

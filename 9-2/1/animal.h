#pragma once
#include<iostream>

using namespace std;

class Animal{
	public : 
		string name;
		int age;
		//Animal(){}
		Animal(string n, int a);
		virtual void printInfo(){}
};

class Zebra : public Animal{
	public :
		int numStripes;
		//Zebra(){}
		Zebra(string n, int a, int numS);
		virtual void printInfo();
};

class Cat : public Animal{
	public :
		string favoriteToy;
		//Cat(){}
		Cat(string n, int a, string fav);
		virtual void printInfo();
};




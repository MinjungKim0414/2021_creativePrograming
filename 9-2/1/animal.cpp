#include<iostream>
#include"animal.h"

using namespace std;

Animal::Animal(string n, int a){
	name = n;
	age = a;
}

Zebra::Zebra(string n, int a, int numS) : Animal(n, a){
	//name = n;
	//age = a;
	numStripes = numS;
}

Cat::Cat(string n, int a, string fav) : Animal(n, a){
	//name = n;
	//age = a;
	favoriteToy = fav;
}

void Zebra::printInfo(){
	cout << "Zebra, Name: " << name << ", Age: " << age << 
		", Number of stripes: " << numStripes << endl;
}

void Cat::printInfo(){
	cout << "Cat, Name: " << name << ", Age: " << age << 
		", Favorite Toy: " << favoriteToy << endl;
}




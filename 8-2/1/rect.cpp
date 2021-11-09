#pragma once
#include<iostream>
#include"rect.h"

using namespace std;

Shape::Shape(int width, int height){
	wid = width;
	hei = height;
}

int Shape::getArea(){
	int ar = wid*hei;
	return ar;
}

int Shape::getPerimeter(){
	int pe = 2*(wid+hei);
	return pe;
}

void Square::print(){
	cout << wid << "x" << hei << " Square" << endl
		<< "Area: " << getArea() << endl
		<< "Perimeter: " << getPerimeter() << endl;
}

void NonSquare::print(){
	cout << wid << "x" << hei << " Nonsquare" << endl
		<< "Area: " << getArea() << endl
		<< "Perimeter: " << getPerimeter() << endl;
}



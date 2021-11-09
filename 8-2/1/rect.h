#pragma once
#include<iostream>

using namespace std;

class Shape{
	public:
		Shape(int width, int height);
		int getArea();
		int getPerimeter();
	protected:
		int wid;
		int hei;
};

class Square: public Shape{
	public:
		Square (int width) : Shape(width, width) {}
		void print();
};

class NonSquare: public Shape{
	public: 
		NonSquare(int width, int height) : Shape(width, height) {}
		void print();
}; 



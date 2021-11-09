#pragma once 
#include<iostream> 
class Shape { 
	public: Shape() {}; 
		Shape(int p, int q,int a, int b, char c); 
		
		double GetArea() {}; 
		int GetPerimeter() {}; 
		void Draw(int canvas_width, int canvas_height) {}; 
	protected: int x; 
		   int y; 
		   int _width; 
		   int _height; 
		   char brush; 
}; 

class Square:public Shape { 
	public: 
		Square(int p, int q,int a, char b) : Shape(p, q, a, a, b) {} 
		double GetArea(); 
		int GetPerimeter(); 
		void Draw(int canvas_width, int canvas_height); 
}; 
class Rectangle:public Shape { 
	public: 
		Rectangle(int p, int q, int a, int b, char c) 
			: Shape(p, q, a, b, c) {} 
		double GetArea(); 
		int GetPerimeter(); 
		void Draw(int canvas_width, int canvas_height); 
}; 
class Diamond :public Shape { 
	public: 
		Diamond(int p, int q, int a, char b) 
			: Shape(p, q, a, a, b) {} 
		double GetArea(); 
		int GetPerimeter(); 
		void Draw(int canvas_width, int canvas_height); 
}; 




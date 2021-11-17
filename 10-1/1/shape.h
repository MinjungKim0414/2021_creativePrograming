#pragma once

class Shape{
	public :
		Shape(double width, double height);
		virtual double getArea(){}
	//private :
		double wid;
		double hei;
};

class Triangle : public Shape{
	public :
		Triangle(double width, double height);
		double getArea();
};

class Rectangle : public Shape{
	public :
		Rectangle(double width, double height);
		double getArea();
};


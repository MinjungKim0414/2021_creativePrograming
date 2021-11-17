#include"shape.h"

Shape::Shape(double width, double height){
	wid = width;
	hei = height;
}

//double Shape::getArea(){
//	return wid * hei / 2;
//}

Triangle::Triangle(double width, double height) : Shape(width, height){}
Rectangle::Rectangle(double width, double height) : Shape(width, height){}

double Triangle::getArea(){
	return wid * hei /2;
}

double Rectangle::getArea(){
	return wid * hei;
}



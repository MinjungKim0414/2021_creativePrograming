#pragma once
#include<iostream>
#include "shapes.h"

using namespace std;

void Circle::cirr(int a, int b, int c) {
	x = a;
	y = b;
	r = c;
	cout << "area: " << r*r*3.14 << ", perimeter: " << 2*3.14*r << endl;
}

void Rectangle::recc(int a, int b, int c, int d) {
	x1 = a;
	y1 = b;
	x2 = c;
	y2 = d;	
	
	int l1, l2;
	(x1 > x2) ? (l1 = x1-x2) : (l1 = x2-x1);
        (y1 > y2) ? (l2 = y1-y2) : (l2 = y2-y1);

	cout << "area: " << l1*l2 << ", perimeter: " << (l1+l2)*2 << endl;
}



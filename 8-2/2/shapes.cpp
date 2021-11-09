#include<iostream>
#include"shapes.h"

using namespace std;

Shape::Shape(int p, int q, int a, int b, char c) {
	x = p;
	y = q;	
	_width = a;
	_height = b;
	brush = c;
}

double Square::GetArea() {
	return _width*_height;
}

int Square::GetPerimeter() {
	return 2 * (_width + _height);
}

void Square::Draw(int canvas_width, int canvas_height) {
	cout << " ";
	for (int i = 0; i < canvas_width; i++) cout << i;
	cout << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			if (y <= i && i < y + _width && 
					x <= j && j < x + _height) 
				cout << brush;
			else cout << ".";
		}
		cout << endl;
	}
}
 
double Rectangle::GetArea() {
	return _width * _height;
}

int Rectangle::GetPerimeter() {
	return 2 * (_width + _height);
}

void Rectangle::Draw(int canvas_width, int canvas_height) {
	cout << " ";
	for (int i = 0; i < canvas_width; i++) cout << i;
	cout << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			if (y <= i && i < y + _height && 
					x <= j && j < x + _width ) 
				cout << brush;
			else cout << ".";
		}
		cout << endl;
	}
}

double Diamond::GetArea() {
	return (2*_height+1)*(2*_width+1)/2.0;
}

int Diamond::GetPerimeter() {
	return 4 * (_width + _height +1 );
}

void Diamond::Draw(int canvas_width, int canvas_height) {
	cout << " ";
	for (int i = 0; i < canvas_width; i++) cout << i;
	cout << endl;
	int a=-1;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		if(y<= i && i<y+_height+1) a++;
		if(y+_height+1<=i) a--;
		for (int j=0;j<canvas_width;j++){
			if(y<=i && i<y+_height){
				if(x-a <= j && j <= x+a) cout<<brush;
				else cout<<".";
				continue;
			}
			else if(y + _height <= i && i < y + 2*_height + 1){
				if(x-a<=j && j <= x+a) cout<<brush;
				else cout<< ".";
				continue;
			}
			else
				cout<<".";
				continue;
		}
		cout << endl;
	}
}

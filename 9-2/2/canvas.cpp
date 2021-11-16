#include<iostream>
#include"canvas.h"

using namespace std;

Canvas::Canvas(size_t row, size_t col){
	rrow = row;
	ccol = col;
	ar = new char*[row];
	for(int i=0; i<col; i++){ ar[i] = new char[ccol]; }
}

Canvas::~Canvas(){}

void Canvas::Resize(size_t w, size_t h) {
	for (int i = -0; i < rrow; i++) {
		delete[] ar[i];
	}
	delete[] ar;
	ar = new char*[w];
	for (int i = 0; i < h; i++) ar[i] = new char[h];
	rrow = w;
	ccol = h;
	this->Clear();
}

bool Canvas::DrawPixel(int x, int y, char brush) {
	if (0 <= x && x < rrow && 0 <= y && y < ccol) {
		ar[x][y] = brush;
		return 1;
	}
	else
		return 0;
}

void Canvas::Print() {
	cout << " ";
	for (int i = 0; i < ccol; i++) cout << i;
	cout << endl;
	for (int i = 0; i < rrow; i++) {
		cout << i;
		for (int j = 0; j < ccol; j++) cout << ar[i][j];
		cout << endl;
	}
}

void Canvas::Clear() {
	for (int i = 0; i < rrow; i++) {
		for (int j = 0; j < ccol; j++) ar[i][j] = '.';
	}
}

Shape::~Shape() {}

Rectangle::Rectangle(int p, int q, int a, int b, char c) {
	x = p;
	y = q;
	wid = a;
	hei = b;
	brush = c;
}

void Rectangle::Draw(Canvas* canvas) {
	for (int i = y; i < y + hei; i++) {
		for (int j = x; j < x + wid; j++) {
			canvas->DrawPixel(i, j, brush);
		}
	}
}

Diamond::Diamond(int p, int q, int a, char b) {
	x = p;
	y = q;
	hei = a;
	brush = b;
}

void Diamond::Draw(Canvas* canvas) {
	int a = -1;
	for (int i = y; i < y + 2 * hei + 1; i++) {
		if (i <= y + hei) a++;
		if (y + hei < i) a--;
		for (int j = x - a; j < x + a + 1; j++) {
			canvas->DrawPixel(i, j, brush);
		}
	}
}



UpTriangle::UpTriangle(int p, int q, int a, char b) {
	x = p;
	y = q;
	hei = a;
	brush = b;
}

void UpTriangle::Draw(Canvas* canvas) {
	int a = -1;
	for (int i = y; i < y + hei; i++) {
		a++;
		for (int j = x - a; j < x + a + 1; j++) {
			canvas->DrawPixel(i, j, brush);
		}
	}
}



DownTriangle::DownTriangle(int p, int q, int a, char b) {
	x = p;
	y = q;
	hei = a;
	brush = b;
}

void DownTriangle::Draw(Canvas* canvas) {
	int a = -1;
	for (int i = y; i > y - hei; i--) {
		a++;
		for (int j = x - a; j < x + a + 1; j++) {
			canvas->DrawPixel(i, j, brush);
		}
	}
}




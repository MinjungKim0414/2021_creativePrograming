#pragma once
#include<iostream>

using namespace std;

class Canvas{
	public :
		Canvas(size_t row, size_t col);
		~Canvas();

		void Resize(size_t w, size_t h);
		bool DrawPixel(int x, int y, char brush);
		void Print();
		void Clear();
	private :
		int rrow;
		int ccol;
		char** ar;
		char br;
};

class Shape{
	public :
		 virtual ~Shape();
		 virtual void Draw(Canvas* canvas){};
	protected :
		 int x, y;
		 int wid, hei;
		 char brush;
};

class Rectangle : public Shape {
	public :
		Rectangle(int p, int q, int a, int b, char c);
		void Draw(Canvas* canvas);
};
class UpTriangle : public Shape{
	public :
		UpTriangle(int p, int q, int a, char b);
		void Draw(Canvas* canvas);
};
class DownTriangle : public Shape{
	public :
		DownTriangle(int p, int q, int a, char b);
		void Draw(Canvas* canvas);
};
class Diamond : public Shape{
	public :
		Diamond(int p, int q, int a, char b);
		void Draw(Canvas* canvas);
};



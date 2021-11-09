#include<iostream>
#include<string>
#include"shapes.h"

using namespace std;

int m, n;
int a, b, c, d;
char e;
string s;

int main() {
	cin >> m >> n;
	while (1) {
		cin >> s;
		if (s.compare("quit") == 0) break;
		if (s.compare("rect") == 0) {
			cin >> a >> b >> c >> d >> e;
			Rectangle M(a, b, c, d, e);
			cout << "Area: " << M.GetArea() << endl << 
				"Perimeter: " << M.GetPerimeter() << endl;
			M.Draw(m, n);
			continue;
		}
		if (s.compare("square") == 0) {
			cin >> a >> b >> c >> e;
			Square M(a,b,c,e);
			cout << "Area: " << M.GetArea() << endl << 
				"Perimeter: " << M.GetPerimeter() << endl;
			M.Draw(m,n);
			continue;
		}
		if (s.compare("diamond") == 0) {
			cin >> a >> b >> c >> e;
			Diamond M(a, b, c, e);
			cout << "Area: " << M.GetArea() << endl << 
				"Perimeter: " << M.GetPerimeter() << endl;
			M.Draw(m, n);
			continue;
		}
	}
	return 0;
}


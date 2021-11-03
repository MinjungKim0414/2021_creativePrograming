#include<iostream>
#include<string>
#include<sstream>
#include"number.h"

using namespace std;

string line;
string buf;

int main() {
	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf; ss >> buf;

		if(line.find("number") != string::npos) {
			Number a;
			a.setNumber(atoi(buf.c_str())); 
			cout << "getNumber(): " << a.getNumber() << endl;
		}
		if(line.find("square") != string::npos) {
                        Square a;
                        a.setNumber(atoi(buf.c_str()));
                        cout << "getNumber(): " << a.getNumber() << endl;
			cout << "getSquare(): " << a.getSquare() << endl;
                }
		if(line.find("cube") != string::npos) {
                        Cube a;
                        a.setNumber(atoi(buf.c_str()));
                        cout << "getNumber(): " << a.getNumber() << endl;
			cout << "getSquare(): " << a.getSquare() << endl;
			cout << "getCube(): " << a.getCube() << endl;
                }
		
		if(line.find("quit") != string::npos){ break; }
	}
}

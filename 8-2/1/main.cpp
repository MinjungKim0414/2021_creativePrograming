#include<iostream>
#include<string>
#include<sstream>
#include"rect.h"

using namespace std;

string line;
string buf;

int main() {
	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf; //ss >> buf;

		if(line.find("nonsquare") != string::npos) {
			ss >> buf; int num1 = atoi(buf.c_str());
			ss >> buf; int num2 = atoi(buf.c_str());
			NonSquare a(num1, num2);
			a.print();
		}
		else if(line.find("square") != string::npos) {
			ss >> buf; int num1 = atoi(buf.c_str());
			Square a(num1);
			a.print();
                }
		
		if(line.find("quit") != string::npos){ break; }
	}
}

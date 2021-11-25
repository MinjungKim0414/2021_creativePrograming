#include <iostream>
#include<string>
#include"my_string.h"
#include <sstream>

using namespace std;

int main(){
	string line, buf;
	MyString A;
	MyString B;
	MyString C;

	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf;
		if(buf == "new"){
			buf = "";
			cout << "enter a: " << endl;
			cin >> A;
			cout << "enter b: " << endl;
			cin >> B;
		}
		if(buf == "c="){
			ss >> buf; string _1 = buf;
			ss >> buf; string op = buf;
			ss >> buf; string _2 = buf;
			if(op == "+"){
				C = ((_1 == "a")? A:B) + ((_2 == "b")? B:A);
			}
			if(op == "*"){
				C = ((_1 == "a")? A : B) * atoi(_2.c_str());
			}
		}
		if(buf == "print"){
			ss >> buf;
			if(buf == "a") { cout << A; }
			if(buf == "b") { cout << B; } 
			if(buf == "c") { cout << C; }
		}
		if(buf == "quit") { break; }
	}
	return 0;
}


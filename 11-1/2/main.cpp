#include <iostream>
#include<string>
#include"my_string2.h"
#include <sstream>

using namespace std;

int main(){
	string line, buf;
	MyString2 A;
	MyString2 B;
	MyString2 C;
	MyString2 CC;
	int swit = 0; // 

	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf;

		if(buf == "set"){
			ss >> buf; 
			if(buf == "copy") { swit = 0; }
			if(buf == "assign"){ swit = 1; }
		}

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
				//assign 
				if(swit == 1 ){
					C = ((_1 == "a")? A:B) 
						+ ((_2 == "b")? B:A);
				}
				// copy
				if(swit == 0){
                                        C = ((_1 == "a")? A:B) 
						+ ((_2 == "b")? B:A);
					MyString2 C(C);
				}
			}
			if(op == "*"){
				//assign
				if(swit == 1){
					C = ((_1 == "a")? A : B) 
						* atoi(_2.c_str());
                                }
                                // copy
                                if(swit == 0){
                                        C = ((_1 == "a")? A:B)
                                                * atoi(_2.c_str());
                                        MyString2 C(C);
                                }
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


#include<iostream>
#include<string>
#include<sstream>
#include"drop.h"

using namespace std;

int main() {
	string buf;
	string line;

	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf; ss >> buf;
		if(line.find("Earth") != string::npos) {
			Earth a(9.81);
			a.simulate(stof(buf));
		}
		
		if(line.find("Moon") != string::npos) {
			Moon a(1.62);
                        a.simulate(stof(buf));
		}

		if(line.find("quit") != string::npos){ break; }
	}
}

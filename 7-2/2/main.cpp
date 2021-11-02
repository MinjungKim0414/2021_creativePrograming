#include<iostream>
#include<string>
#include<sstream>
#include"setfunc.h"

using namespace std;

string line;
string buf;

int main() {
	set<int> sset;
	while(true){
		getline(cin, line);

		if(line == "0"){ break; }

		sset = parseSet(line);
		printSet(sset);
	}
}

#include<iostream>
#include<sstream>
#include<vector>
#include"animal.h"

using namespace std;

int main(){
	string buf;
	string line;
	vector<Animal*> vecA;

	while(true){
		getline(cin, line);
		stringstream ss(line);
		ss >> buf;
		if(buf == "z"){
			ss >> buf; string n = buf;
			ss >> buf; int a = atoi(buf.c_str());
			ss >> buf; int numS = atoi(buf.c_str());
			vecA.push_back(new Zebra(n, a, numS));
		}
		if(buf == "c"){
			ss >> buf; string n = buf;
                        ss >> buf; int a = atoi(buf.c_str());
                        ss >> buf; string fav = buf;
                        vecA.push_back(new Cat(n, a, fav));
		}
		if(buf == "0" ){ 
			for(auto it=vecA.begin(); it != vecA.end(); it++)
				(*it)->printInfo();
			for(auto it=vecA.begin(); it != vecA.end(); it++)
				delete *it;
			break; 
		}
	}
	return 0;
}



#include<iostream>
#include<sstream>
#include <vector>
#include"shape.h"


using namespace std;

int main(){
	vector<Shape*> arr;

	while(true){
		string line;
		string buf;
		getline(cin, line);
		stringstream ss(line);
		ss >> buf;

		if(buf == "r"){
			ss >> buf; int num1 = atoi(buf.c_str());
			ss >> buf; int num2 = atoi(buf.c_str());
			arr.push_back(new Rectangle(num1, num2));
		}
		if(buf == "t"){
			ss >> buf; int num1 = atoi(buf.c_str());
                        ss >> buf; int num2 = atoi(buf.c_str());
                        arr.push_back(new Triangle(num1, num2));
		}
		if(buf == "0"){
			for(auto it=arr.begin(); it!=arr.end(); it++){
				cout << (*it)->getArea() << endl;
			}
			break;
		}
	}
	for(auto it=arr.begin(); it!=arr.end(); it++)
		delete *it;

	return 0;
}

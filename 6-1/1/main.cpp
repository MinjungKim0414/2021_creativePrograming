#include<iostream> 
#include"shapes.h" 
#include<string> 
using namespace std; 

int main() { 
	int p1, p2, p3, p4; 
	string str;

	while(true){
		cout << "shape?" << endl; 
		cin >> str; 
		
		if (str == "C") { 
			Circle cir; 
			cin >> p1 >> p2 >> p3; 
			cir.cirr(p1, p2, p3); 
		} 
		
		else if (str == "R") { 
			Rectangle rec; 
			cin >> p1 >> p2 >> p3 >> p4; 
			rec.recc(p1, p2, p3, p4); 
		}

		else if (str == "Q") { break; }

		cout << endl;
	}
	return 0; 
} 


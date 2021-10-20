#include<iostream>
#include<string>
#include "charlist.h"

using namespace std;


int main() {
	string str;
	while (true){
		getline(cin, str);
		if (str == "quit") break;
		CharList cl(&str[0]);
		bool aaa = cl.CheckPalindrome();
		if (aaa == true)
			cout << "true" << endl;
		else if (aaa == false)
			cout << "false" << endl;
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
	string str1, str2, temp;
	cin >> str1;
	cin >> str2;
	temp = str1 + str2;
	cout << temp << endl;
	cout << temp[0] << endl;
	cout << temp[temp.length()-1] << endl;
	return 0;
}


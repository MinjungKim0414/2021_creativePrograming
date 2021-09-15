#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int add(int a, int b){
	return a + b;
}

string add(string a, string b){
	return a + "-" + b;
}

float add(float a, float b=0.9){
	return a + b;
}

int main(void){
	int num1, num2;
	string str1, str2;
	float num3;
	
	cin >> num1 >> num2 >> str1 >> str2 >> num3;

	cout << add(num1, num2) << endl;
	cout << add(str1, str2) << endl;
	cout << add(num3) << endl;

	return 0;
}


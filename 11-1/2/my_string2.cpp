#include<ostream>
#include<istream>
#include<iostream>
#include<string>
#include"my_string2.h"

using namespace std;

MyString2::MyString2(const MyString2 &b){
	cout << "(copy constructor)" << endl;
	str = b.str;
}

MyString2& MyString2:: operator=(const MyString2& b){
	cout << "(assignment operator)" << endl;
	str = b.str;
	return *this;
}

MyString2 MyString2::operator+(const MyString2& b){
	MyString2 c;
       	c.str = this->str + b.str;
	return c;
}


MyString2 MyString2::operator*(const int b){
	MyString2 c;
	for(int i=0; i<b; i++) 
		c.str += this->str;
	return c;
}


ostream& operator<<(ostream& out, MyString2& my_string){
	out << my_string.str << endl;
	return out;
}


istream& operator>>(istream& in, MyString2& my_string){
	in >> my_string.str;
	return in;
}


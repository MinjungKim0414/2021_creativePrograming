#include<ostream>
#include<istream>
#include<iostream>
#include<string>
#include"my_string.h"

using namespace std;

MyString MyString::operator+(const MyString& b){
	MyString c;
       	c.str = this->str + b.str;
	return c;
}


MyString MyString::operator*(const int b){
	MyString c;
	for(int i=0; i<b; i++) 
		c.str += this->str;
	return c;
}


ostream& operator<<(ostream& out, MyString& my_string){
	out << my_string.str << endl;
	return out;
}


istream& operator>>(istream& in, MyString& my_string){
	in >> my_string.str;
	return in;
}


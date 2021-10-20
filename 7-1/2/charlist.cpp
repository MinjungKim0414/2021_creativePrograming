#pragma once 
#include <cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include "charlist.h"

CharList::CharList(const char* str) {
	int a = strlen(str);
	for (int i=0; i<a; i++)
		mystring_.push_back(str[i]);
};
CharList::~CharList() {};

bool CharList::CheckPalindrome() {
	string ss;
	list<char>::iterator iter;
	for (iter = mystring_.begin(); iter != mystring_.end(); iter++)
		ss += *iter;
	for (int i = 0; i < ss.length(); i++) {
		if (ss[i] != ss[ss.length() - i - 1]) {
			return false;
		}
	}
	return true;
};
 
list<char> CharList::GetAll() {
	return mystring_;
};


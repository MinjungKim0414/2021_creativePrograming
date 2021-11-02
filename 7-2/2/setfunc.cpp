#pragma once
#include<iostream>
#include<set>
#include<sstream>
#include"setfunc.h"

using namespace std;

set<int> parseSet(const string& str){
	set<int> s1;
	set<int> s2;
	string buf;
	string op;
	stringstream ss(str);
	ss >> buf; // { delete
	while(ss >> buf and buf != "}"){ s1.insert(atoi(buf.c_str())); }

	ss >> buf;
	op = buf;

	ss >> buf;
        while(ss >> buf and buf != "}"){ s2.insert(atoi(buf.c_str())); }

	if(op == "+")
		s1 = getUnion(s1, s2);
	if(op == "*")
		s1 = getIntersection(s1, s2);
	if(op == "-")
		s1 = getDifference(s1, s2);


	return s1;
}

void printSet(const set<int>& s){
	cout << "{ ";
	for(set<int>::const_iterator it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}
	cout << "}" << endl;
}

set<int> getIntersection(const set<int>& set0, const set<int>& set1){
	set<int> s;
	for(set<int>::const_iterator it1 = set0.begin(); it1 != set0.end();
			++it1){
		for(set<int>::const_iterator it2 = set1.begin(); 
				it2 != set1.end(); ++it2){
			if(*it1 == *it2)
				s.insert(*it1);
		}
	}
	return s;
}

set<int> getUnion(const set<int>& set0, const set<int>& set1){
	set<int> s;
	s = set0;
	for(set<int>::const_iterator it = set1.begin(); it != set1.end(); ++it)
		s.insert(*it);
	return s;
}

set<int> getDifference(const set<int>& set0, const set<int>& set1){
	set<int> s;
	s = set0;
        for(set<int>::const_iterator it = set1.begin(); it != set1.end(); ++it)
                s.erase(*it);
	return s;
}



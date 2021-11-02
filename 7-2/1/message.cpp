#pragma once
#include<iostream>
#include<map>
#include<vector>
#include"message.h"

using namespace std;

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}

void MessageBook::AddMessage(int number, const string& message){
	if(messages_.find(number) != messages_.end())
		messages_.erase(number);
	messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number){
	if(messages_.find(number) != messages_.end())
		messages_.erase(number);
}

vector<int> MessageBook::GetNumbers(){
	vector<int> vec;
	for(map<int, string>::iterator it = messages_.begin(); 
			it != messages_.end(); ++it)
		vec.push_back(it->first);
	return vec;
}

const string& MessageBook::GetMessage(int number){
	for(map<int, string>::iterator it = messages_.begin();
			it != messages_.end(); ++it){
		if(number == it->first)
			return it->second;
	}
}


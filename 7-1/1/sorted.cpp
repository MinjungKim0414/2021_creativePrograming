#pragma once
#include<algorithm>
#include<iostream>
#include<vector>
#include"sorted.h"

SortedArray::SortedArray() {}
SortedArray::~SortedArray() {}

void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending() {
	sort(numbers_.begin(), numbers_.end());
	return numbers_;
}

vector<int> SortedArray::GetSortedDescending() {
	sort(numbers_.begin(), numbers_.end(), greater<>());
	return numbers_;
}

int SortedArray::GetMax() {
	//sort(numbers_.begin(), numbers_.end());dddd
	//return numbers_.back();
	return *max_element(numbers_.begin(), numbers_.end());
}

int SortedArray::GetMin() {
	//sort(numbers_.begin(), numbers_.end());
	//return numbers_.front();
	return *min_element(numbers_.begin(), numbers_.end());
}



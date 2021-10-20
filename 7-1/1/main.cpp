#include<iostream>
#include<string>
#include"sorted.h"

using namespace std;

SortedArray arr;
string str;
string s1;
vector<int> v;
size_t index;

int main() {
	while (true) {
		getline(cin, str);
		if (isdigit(str[0])) {
			while (true) {
				index = str.find(" ");
				if (index == string::npos) break;
				s1 = str.substr(0, index);
				s = str.substr(index + 1);
				arr.AddNumber(atoi(s1.c_str()));
			}
			arr.AddNumber(atoi(str.c_str()));
		}
		else {
			if (str.compare("ascend") == 0) {
				v = arr.GetSortedAscending();
				for (int i = 0; i < v.size(); i++) 
					cout << v[i] << " ";
				cout << endl;
			}
			else if (str.compare("descend") == 0) {
				v = arr.GetSortedDescending();
				for (int i = 0; i < v.size(); i++) 
					cout << v[i] << " ";
				cout << endl;
			}
			else if (str.compare("max") == 0) {
				cout << arr.GetMax() << endl;
			}
			else if (str.compare("min") == 0) {
				cout << arr.GetMin() << endl;
			}
			else if (str.compare("quit") == 0) {
				break;
			}
		}
	}
	return 0;
}

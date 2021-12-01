#include <iostream>

using namespace std;

template<typename T>

void myswap(T &a, T &b){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

string acm(){
	return "After calling myswap(): ";
}

int i1, i2;
double d1, d2;
string s1, s2;

int main(){
	cin >> i1 >> i2;
	myswap<int> (i1, i2);
	cout << acm() << i1 << " " << i2 << endl;

	cin >> d1 >> d2;
	myswap<double>(d1, d2);
	cout << acm() << d1 << " " << d2 << endl;

	cin >> s1 >> s2;
	myswap<string>(s1, s2);
	cout << acm() << s1 << " " << s2 << endl;

	return 0;
}


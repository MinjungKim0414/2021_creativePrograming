#include <iostream>
#include "my_container.h"

using namespace std;


int main(){
	int num;

	cin >> num;
	MyContainer<double> Real(num);
	cin >> Real;
	cout << Real;

	cin >> num;
        MyContainer<string> Str(num);
        cin >> Str;
        cout << Str;

	cin >> num;
        MyContainer<int> Int(num);
        cin >> Int;
        cout << Int;

	return 0;
}






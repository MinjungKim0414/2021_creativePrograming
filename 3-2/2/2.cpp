#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

string primeFactorization(unsigned int _number){
	int num = _number;
	for(int i=2; i <= _number; i++){
		int jisu = 0;
		while(num % i == 0 && num/i != 0){
			jisu += 1;
			num /= i;
		}
		if(_number%i == 0){
			cout << i << "^" << jisu;
			if(num != 1){
				cout << " x ";
			}
			while(_number%i == 0) {_number /= i;}
		}			
	}
	return "";
}


int main(void){
	unsigned int number;
	cin >> number;

	cout << primeFactorization(number) << endl;
	return 0;
}


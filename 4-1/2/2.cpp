#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;



int main(void){
	int N, target, cnt=0;
	cin >> N;

	int* arr = new int[N];

	for(int i=0; i<N; i++){
		cin >> arr[i];
	}

	cin >> target;
	cout << "target value: " << target << endl;

	for(int i=0; i<N; i++){
		if (arr[i] == target){ cnt++; }
	}

	cout << "target count: " << cnt << endl;
	
	delete[] arr;
	return 0;
}


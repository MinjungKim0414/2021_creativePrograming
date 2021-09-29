#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void){
	int n;
	cin >> n;
	
	int* arr = new int[n];

	for(int i=0; i<n; i++){
		arr[i] = i;
	}
	
	for(int i=0; i<n; i++){
		cout <<arr[i] << " ";
	}
	cout << endl;
	
	delete[] arr;

	return 0;
}

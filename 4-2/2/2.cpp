#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void swap(int *n1, int *n2){
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void magicSquare(int (*a)[10], int n){
	int num = 1;
	int cnt = n/4;
	for(int i=n-1; i>=0; i--){
		for(int j=n-1; j>=0; j--){
			a[i][j] = num;
			num++;
		}
	}
	for(int x=0; x<cnt; x++){
		int xx = n/4;
		int yy = n - n/4 - 1;
		for(int i=0; i<n/2; i++){
			swap(&a[x][xx], &a[n-1-x][yy]);
			swap(&a[xx][x], &a[yy][n-1-x]);
			xx++;
			yy--;
		}
	}
}

int main(void){
	int N;
	int arr[10][10] = {0,};

	cin >> N;
	
	magicSquare(arr, N);
	
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

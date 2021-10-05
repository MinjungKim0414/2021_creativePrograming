#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void magicSquare(int (*a)[10], int n){
	int x, y;
	x = 0;
        y = n / 2;

        for(int i=1; i<= n*n; i++){
                a[x][y] = i;

                if(i%n == 0) {
                        x++;
                }else{
                        x--;
                        y++;
                        if(x<0) { x = n-1; }
                        if(y>n-1) { y = 0; }
                }
        } 	
}

int main(void){
	int N;
	int arr[10][10] = {0,};

	cin >> N;
	
	if(N%2 == 0 || N < 3) { return 0; }

	magicSquare(arr, N);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

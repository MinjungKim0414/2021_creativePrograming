#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, const char **argv){
	char str[50];
	int sum=0;
	for(int i=1; i<argc; i++){
		if(atoi(argv[i]) == 0){ 
			strcat(str, argv[i]);
		}else{
			sum += atoi(argv[i]);
		}
	}
	cout << str << endl << sum << endl;

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, const char **argv){
	int num = atoi(argv[2]);
	for(int i=0; i<num; i++){ cout << argv[1] << endl; }

	return 0;
}

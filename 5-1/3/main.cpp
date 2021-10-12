#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include "minmax.h"

using namespace std;

int main(int argc, const char **argv){
	int *point = new int[argc-1];
	for(int i=0; i<argc-1; i++){ point[i] = atoi(argv[i+1]); }
	
	int min=9999, max=-9999;
	getMinMax(point, argc-1, min, max);

	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	
	delete[] point;
	return 0;
}

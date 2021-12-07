#include <iostream>
#include "list.h"

using namespace std;

int main() {
	int array[5] = { 1, 2, 4, 5, 6 };
	int array2[4] = { 1, 3, 5, 7 } ;

	List<int> li(array, 5);
	List<int> li2(array2, 4);

	//implement here
	for(int i=0; i < 4; i++){
		for(int j=0; j < 5; j++){
			if(array[j] > array2[i]){
				int num = array2[i];
				cout << num << endl;
				li.insert_at(j+i, num);
				break;
			}
			else if(array2[i] > array[4]){
				li.push_back(array2[i]);
				break;
			}
		}
	}
	
	cout << li << endl; // 1,1,2,3,4,5,5,6,7
	
	return 0;
}


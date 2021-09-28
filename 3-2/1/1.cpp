#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

namespace first_space {
	void func(){
		cout << "Print from first space" << endl;
	}
}

namespace second_space {
	void func(){
		cout << "Print from second space" << endl;
	}
}

int main(void){
	int in;
	cin >> in;
	if (in == 1){
		first_space::func();
	}else{
		second_space::func();
	}
	
	return 0;
}

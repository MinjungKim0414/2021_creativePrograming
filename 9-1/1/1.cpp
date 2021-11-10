#include <iostream>
#include <vector>

using namespace std;

class A{
	public : 
		virtual string test(){ return "A::test()"; }
};

class B: public A{
        public :
                virtual string test(){ return "B::test()"; } 
}; 

class C: public B{
        public :
                virtual string test(){ return "C::test()"; }
};

int main(){
	A* a = new A;
	B* b = new B;
	C* c = new C;
	
	vector <A*> vecA;

	while(true){
		string line;
		cin >> line;
		
		if (line == "A"){ vecA.push_back(a); }
		if (line == "B"){ vecA.push_back(b); }
		if (line == "C"){ vecA.push_back(c); }
		if (line == "quit"){ break; }
	}

	for(int i=0; i < vecA.size(); i++){ cout << vecA[i]->test() << endl; }
	 
	// for(int i=0; i < vecA.size(); i++){ delete vecA[i]; }
	// double core dump
	delete a;
	delete b;
	delete c;

	return 0;
}




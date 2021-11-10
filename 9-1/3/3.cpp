#include <iostream>
#include <vector>

using namespace std;

class A{
	private :
		int* memberA;
	public : 
		A(){}
		A(int p){
			memberA = new int;;
			*memberA = p;
			cout << "new memberA" << endl;
		}
		virtual ~A(){
			delete memberA;
			cout << "delete memberA" << endl;
		}
		virtual void print(){
			cout << "*memberA "<< *memberA << endl;
		}
};

class B: public A{
	private :
		double* memberB;
        public :
		B(){}
		B(double p): A(1){
			memberB = new double;
			*memberB = p;
			cout << "new memberB" << endl;
		}
		virtual ~B(){
			delete memberB;
			cout << "delete memberB" << endl;
		}
		virtual void print(){
			A::print();
			cout << "*memberB " << *memberB << endl;
		}
}; 

class C: public B{
	private :
		string* memberC;
        public :
		C(){}
		C(const string& p) : B(1.1){
			memberC = new string;
			*memberC = p;
			cout << "new memberC" << endl;
		}
		virtual ~C(){
			delete memberC;
			cout << "delete memberC" << endl;
		}
		virtual void print(){
			B::print();
			cout << "*memberC " << *memberC << endl;
		}
};


int main(){
	//A* a = new A;
	//B* b = new B;
	//C* c = new C;
	
	vector <A*> vecA;

	while(true){
		string line1;
		string line2;
		cin >> line1 >> line2;
		
		if (line1 == "A"){ 
			A* a = new A(stoi(line2));
			vecA.push_back(a); 
		}
		if (line1 == "B"){ 
			B* b = new B(stod(line2));
			vecA.push_back(b); 
		}
		if (line1 == "C"){ 
			C* c = new C(line2);
			vecA.push_back(c); 
		}
		if (line1 == "quit"){ 
			for(int i=0; i < vecA.size(); i++){
				vecA[i]->print();
			}
			//delete a;
        		//delete b;
        		//delete c;
			break; 
		}
	}

	//delete a;
	//delete b;
	//delete c;

	return 0;
}




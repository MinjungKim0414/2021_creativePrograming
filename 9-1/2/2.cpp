#include <iostream>
#include <vector>

using namespace std;

class A{
	public : 
		virtual string getTypeInfo(){ 
			return "This is an instance of class A";
	       	}
};

class B: public A{
        public :
		virtual string getTypeInfo(){
                        return "This is an instance of class B";
                }

}; 

class C: public B{
        public :
		virtual string getTypeInfo(){
                        return "This is an instance of class C";
                }

};

void printObjectTypeInfo1(A* object){
	cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object){
	cout << object.getTypeInfo() << endl;
}


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
		if (line == "quit"){ 
			for(int i=0; i < vecA.size(); i++){
				printObjectTypeInfo1(vecA[i]);
				printObjectTypeInfo2(*vecA[i]);
			}
			break; 
		}
	}

	delete a;
	delete b;
	delete c;

	return 0;
}




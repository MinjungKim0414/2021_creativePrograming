#include <iostream>
#include <vector>

using namespace std;

class B{
	public :
		virtual ~B(){}
};

class C : public B{
	public : 
		void test(){ cout << "C::test()" << endl; }
};

class D : public B{
	public :
		void test(){ cout << "D::test()" << endl; }
};

int main(){
	vector<B*> arr;

	while(true){
		string str;
		cin >> str;

		if(str == "B"){
			arr.push_back(new B);
		}
		if(str == "C"){
			arr.push_back(new C);
		}
		if(str == "D"){
			arr.push_back(new D);
		}
		if(str == "0"){
			C* cc;
			D* dd;
			for(auto it=arr.begin(); it!=arr.end(); it++){
				cc = dynamic_cast<C*>(*it);
				dd = dynamic_cast<D*>(*it);
				if(cc){ cc->test(); }
				if(dd){ dd->test(); }
			}
			break;
		}
	}
	for(auto it=arr.begin(); it!=arr.end(); it++){ delete *it; }
	return 0;

}


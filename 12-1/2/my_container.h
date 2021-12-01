#pragma once
//#include <iostream>

using namespace std;

template <class T>
class MyContainer{
	public :
		MyContainer(int len){
			obj_arr = new T[len];
			n_elements = len;
			//clear();
		}
		~MyContainer(){
			delete[] obj_arr;
		}
		void clear(){
			//cout << "clear" << endl;
			//for(int i=0; i<size(); i++){
			//	obj_arr[i] = NULL;
			//}
		}
		int size(){
			return n_elements;
		}

		template <class U>
			friend istream& operator>> 
			(istream &in, MyContainer<U> &b);
		template <class U>
			friend ostream& operator<< 
			(ostream &out, MyContainer<U> &b);

	protected :
		T * obj_arr = NULL;
		int n_elements;
};

template<class T>
istream& operator>> (istream &in, MyContainer<T> &b){
	for(int i=0; i<b.size(); i++){ 
		in >> b.obj_arr[i]; 
	}
	return in;
}

template<class T>
ostream& operator<< (ostream &out, MyContainer<T> &b){
        for(int i=0; i<b.size(); i++){ 
		out << b.obj_arr[i] << " "; 
	}
	out << "\n";
	return out;
}

		

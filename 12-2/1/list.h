#pragma once
#include<iostream>

using namespace std;

template <class T>
class Node
{
	public:
		T data;
		Node<T>* next;
};

template <class T>
class List {
	private:
		Node<T> *head;
	public:
		List() : head(NULL) {};

		~List() {
			Node<T>* fir = head;
			Node<T>* sec;
			while (fir->next != NULL) {
				sec = fir;
				fir = fir -> next;
				delete sec;
			}
		}


		List(T* arr, int n_nodes) {
			head = new Node<T>;
			head->data = arr[0];
			head->next = NULL;

			Node<T>* he = head;

			for (int i = 1; i < n_nodes; i++) {
				Node<T>*nnode = new Node<T>;
				nnode->data = arr[i];
				nnode->next = NULL;
				while (he->next != NULL) { he = he->next; }
				he->next = nnode;
			}
		}

		void insert_at(int idx, const T& data) {
			Node<T>* nnode = new Node<T>;
			nnode->data = data;

			Node<T>* fir = head;
			Node<T>* sec;
			for (int i=0; i < idx-1; i++){ fir = fir->next; }
			sec = fir->next;
			fir->next = nnode;
			nnode->next = sec;
		}

		void remove_at(int idx) {
			Node<int>* del;
			Node<int>* he = head;
			for (int i=0; i < idx-1; i++){ he = he->next; }
			del = he->next;
			he->next = del->next;
			delete del;
		}

		void pop_back() {
			Node<T>* del = head;
			Node<T>* he = head;
			while (del->next != NULL){ del = del->next; }
			while (he->next != del){ he = he->next; }
			he->next = NULL;
			delete del;
		}

		void push_back(const T& val) {
			Node<T>* nnode = new Node<T>;
			Node<T>* he = head;
			nnode->data = val;
			nnode->next = NULL;

			while (he->next != NULL){ he = he->next; }
			he->next = nnode;
		}

		void pop_front() {
			Node<T>* he = head;
			this->head = he->next;
			delete he;
		}
		void push_front(const T& val) {
			Node<T>* nnode=new Node<T>;
			nnode->data = val;
			nnode->next = head;
			this->head = nnode;
		}

		friend ostream& operator<< (ostream& out, List& rhs) {
			Node<T>* rhshe = rhs.head;
			while (rhshe->next != NULL) {
				out << rhshe->data << ",";
				rhshe = rhshe->next;
			}
			out << rhshe->data;
			return out;
		}

};


#include <bits/stdc++.h>

using namespace std;

struct Elem{
	Elem* bottom;
	int data;
	Elem():data(),bottom(){}
	Elem(int D):data(D),bottom(){}
};

struct Stack{
	Elem* head;
	int size;
	Stack():head(),size(0){}
	void insert(int toAdd){
		//Insert method
		if(head==NULL){
			size=1;
			head=(Elem *)malloc(sizeof(Elem));
			*head=Elem(toAdd);
		}else{
			Elem* bottom=head;
			head=(Elem *)malloc(sizeof(Elem));
			*head=Elem(toAdd);
			head->bottom=bottom;
			size++;
		}
	}
	void pop(){
		//pop method
		if(head!=NULL){
			Elem* elim;
			int ret=head->data;
			elim=head;
			head=head->bottom;
			free(elim);
			size--;
		}
	}
	int top(){
		//top, unstable to no Head
		if(head!=NULL)
			return head->data;
	}
};

int main(){
}

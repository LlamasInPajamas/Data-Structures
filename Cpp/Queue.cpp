#include <bits/stdc++.h>

using namespace std;

struct Elem{
	Elem* next;
	int data;
	Elem():data(),next(){}
	Elem(int D):data(D),next(){}
};

struct Queue{
	Elem* head;
	Elem* last;
	int size;
	Queue():head(),last(),size(0){}
	void insert(int toAdd){
		//Insert method
		if(head==NULL){
			size=1;
			head=(Elem *)malloc(sizeof(Elem));
			last=head;
			*head=Elem(toAdd);
		}else{
			last->next=(Elem *)malloc(sizeof(Elem));
			last=last->next;
			*last=Elem(toAdd);
			size++;
		}
	}
	void pop(){
		//pop method
		if(head!=NULL){
			Elem* elim;
			int ret=head->data;
			elim=head;
			head=head->next;
			free(elim);
			size--;
		}
	}
	int front(){
		//front, unstable to no Head
		if(head!=NULL)
			return head->data;
	}
};

int main(){
}

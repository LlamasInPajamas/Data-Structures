#include <bits/stdc++.h>
//Falta coisa pra krai
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
	void operator+(int toAdd){
		if(head==NULL){
			head=(Elem *)malloc(sizeof(Elem));
			last=head;
			*head=Elem(toAdd);
			cout<<last<<head;
		}
	}
	
};

int main(){
	Queue q;
	
	
	
}

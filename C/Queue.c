#include <stdlib.h>

struct Elem{
	struct Elem* next;
	int data;
};

struct Queue{
	struct Elem* head;
	struct Elem* last;
	int size;
};
void reset(struct Queue * queue){
	//clear queue
	queue->head=NULL;
	queue->last=NULL;
	queue->size=0;
}
void insert(struct Queue* queue, int toAdd){
		//Insert method
	if(queue->head==NULL){
		queue->size=1;
		queue->head=(struct Elem *)malloc(sizeof(struct Elem));
		queue->last=queue->head;
		queue->head->data=toAdd;
	}else{
		queue->last->next=(struct Elem *)malloc(sizeof(struct Elem));
		queue->last=queue->last->next;
		queue->last->data=toAdd;
		queue->size++;
	}
}
void pop(struct Queue* queue){
	//pop method
	if(queue->head!=NULL){
		struct Elem* elim;
		elim=queue->head;
		queue->head=queue->head->next;
		free(elim);
		queue->size--;
	}
}
int front(struct Queue* queue){
	//front, unstable to no Head
	if(queue->head!=NULL)
		return queue->head->data;
}

int main(){
}

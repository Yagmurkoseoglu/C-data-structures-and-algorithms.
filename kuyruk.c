#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node* next;
};
struct node* front=NULL;/*ön*/
struct node* rear=NULL;/*arka*/

void enqueue( int value){
	
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	if(newnode==NULL){
		printf("bellek yetersiz\n");
		return ;
	}
	newnode->data=value;
	newnode->next=Null;
	
	if(rear==NULL){
		printf("kuyruk boþ\n");
		front=temp=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(int value){
	if(front==NULL){
		printf("kuyruk zaten bos\n");
		return;
	}
	struct node* temp=front;
	front=front->next;
	
	if(front==NULL){
		rear==NULL;
	}
	free(temp);
}


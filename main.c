#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node* next;
};
void push(int value){

struct node* top=NULL; /*en üst elemený gösterir þu an stack bos*/
struct node* yeni=malloc(sizeof(struct node));
 
 yeni->data=value; /*yýðýna veri ekle*/
 yeni->next=top; /*yeni eklediðin veriyi diðer veriye baðla*/
 yeni->next=top; 
 printf("%d yýðýna eklendi.\n");
}

 int pop(){
 if(top==NULL){
 	printf("yýðýn boþ eleman çýkartýlamaz!");
 	return -1;
 }
 
struct node* temp=top;
int popped= top->data;
top=top->next;
free(temp);
printf("yýðýndan cýkarýldý%d\n",popped);
return popped;
 }
 
 int peek(){
 	if(top==NULL){
 	printf("yýðýn bos\n");
 	return -1;
	 }
	 return=top->data;
 }
 
int main(int argc, char *argv[]) {
	
	push(12);
	push(50);
	push(25);
	push(89);
	pop();
	push(32);
	pop();
	return 0;
}

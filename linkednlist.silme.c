#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node* next;
};
struct node* sil(struct node* head,int aranan){
	struct node* temp=head;
	struct node* previous=NULL;
	while(temp!=NULL){
		if(temp->data=aranan ){
			if(previous==NULL){
				head=temp->next;
			}
			else{
				previous->next=temp->next;
			}
			free(temp);
			printf("%d silindi\n",aranan);
			return head;
			
		}
		previous=temp;
		temp=temp->next;
	
	}
	
}
int main(int argc, char *argv[]) {
	struct node* head=malloc(sizeof(struct node));
	struct node* second=malloc(sizeof(struct node));
	struct node* third=malloc(sizeof(struct node));
	
	head->data=89;
	head->next=second;
	second->data=34;
	second->next=third;
	third->data=45;
	third->next=NULL;
	
	int aranan;
	printf("silmek istediginiz sayiyi giriniz:");
	scanf("%d",&aranan);
	
	free(head);
	free(second);
	free(third);
	
	return 0;
}

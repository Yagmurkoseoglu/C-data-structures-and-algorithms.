#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node {
	int data;   /*d���m olu�turduk*/
	struct Node* next;
};

int main(int argc, char *argv[]) {
	struct Node *head,*ikinci; /**/
head=(struct Node*)malloc(sizeof(struct Node));  /**/

if(head==NULL){
	printf("bellek ayr�lamad�!");
	return 1;
}

head->data=15;
head->next=NULL;

printf("ilk dugumm olusturuldu.\n");
printf("dugumm verisi:%d\n", head->data);
 
 ikinci= (struct Node*)malloc(sizeof(struct Node));
if(ikinci==NULL){
	printf("bellek ayr�lamad�!");
	return 1;
}
ikinci->data=23;
data->next=Null;
printf("ikinci dugum olusturuldu\n");
printf("dugum degeri:%d\n", data->next);
free(head);
free(ikinci);	
return 0;
}

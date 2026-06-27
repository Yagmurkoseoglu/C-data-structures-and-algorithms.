#include <stdio.h>
#include <stdlib.h>

int ara(struct node* head,int aranan){
	struct node* bul=head;
	while(bul!=NULL){ /*liste bitene kadar null olana kadar devam et*/
		if(bul->data==aranan){
			return 1;
		}
		bul=bul->next;
	}
}
int main(int argc, char *argv[]) {
	struct node* head = malloc(sizeof(struct node));
	struct node* second= malloc(sizeof(struct node));
	struct node* third= malloc(sizeof(struct node));
	
	head->data=13;
	head->next=second;
	
	second->data=29;
	second->next=third;
	
	third->data=65;
	third->next=NULL;
	
	int aranan;
	printf("aranacak sayiyi giriniz:\n");
	scanf("%d",&aranan);
	
	if(ara(head,aranan)){
		printf("%d aranan deðer bulundu.\n",aranan);
	
	}else{
		printf("bulunamadý\n");
	}
	
	free(head);
	free(second);
	free(third);

	
	return 0;
}

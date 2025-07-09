#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{
	struct node* head=NULL;
        struct node* second=NULL;
        struct node* tail=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	tail=(struct node*)malloc(sizeof(struct node));
        head->data=10;
	head->next=second;
	second->data=20;
	second->next=tail;
	tail->data=30;
	tail->next=NULL;
        struct node* temp=head;
	while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL \n");
return 0;
}







#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int data;
	struct sll* next;
};
void InsertAtBeginning(struct sll** head_ref,int new_data)
{
	struct sll* new_node=(struct sll*)malloc(sizeof(struct sll));
        new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
int main()
{
	struct sll* head=NULL;
	struct sll* second=NULL;
	struct sll* third=NULL;
	head=(struct sll*)malloc(sizeof(struct sll));
        second=(struct sll*)malloc(sizeof(struct sll));
        third=(struct sll*)malloc(sizeof(struct sll));
        head->data=2;
	head->next=second;
	second->data=4;
	second->next=third;
	third->data=6;
	third->next=NULL;
	struct sll* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL \n");
        InsertAtBeginning(&head,10);
	printf("after inserting at beginning:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL \n");
	return 0;
}

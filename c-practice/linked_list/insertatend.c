#include<stdio.h>
#include<stdlib.h>
struct sll
{
        int data;
        struct sll* next;
};
void InsertAtEnd(struct sll** head_ref,int new_data)
{
        struct sll* new_node=(struct sll*)malloc(sizeof(struct sll));
        new_node->data=new_data;
        new_node->next=NULL;
	if(*head_ref==NULL)
	{
        *head_ref=new_node;
	return;
	}
	struct sll* last=*head_ref;
        while(last->next!=NULL)
	{
		last=last->next;
	}
		last->next=new_node;
	
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
	
        InsertAtEnd(&head,10);
        printf("after inserting 10 at end:\n");
        temp = head;
        while (temp != NULL)
        {
          printf("%d->", temp->data);
          temp = temp->next;
        }
    printf("NULL\n"); 
        return 0;
}




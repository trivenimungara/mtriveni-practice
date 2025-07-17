#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int data;
	struct sll* next;
};
void insertatbeginning(struct sll** head_ref,int value)
{
	struct sll* newnode=(struct sll*)malloc(sizeof(struct sll));
	if (!newnode) 
	{
	       	perror("malloc");
	       	exit(EXIT_FAILURE);
       	}
	newnode->data=value;
	newnode->next=*head_ref;
	*head_ref=newnode;
}
void displaylist(struct sll* head)
{
	printf("linked list");
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL \n");
}
void main()
{
	struct sll* head=NULL;
	int value,choice;
	while(1)
	{
		printf("1.insert at beginning \n");
		printf("2.display \n");
		printf("3.exit \n");
		printf("enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value to insert:");
				scanf("%d",&value);
				insertatbeginning(&head,value);
				break;
			case 2:
				displaylist(head);
				break;
			case 3:
				printf("exit");
				exit(0);
				break;
				while(head)
				{
					struct sll* temp=head;
					head=head->next;
					free(temp);
				}
			default:
				printf("invalid choice");
		}
	}
}


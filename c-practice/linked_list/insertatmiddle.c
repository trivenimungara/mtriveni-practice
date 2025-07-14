#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void insertAtMiddle(struct node** head_ref, int new_data) 
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) 
    {
        *head_ref = new_node;
        return;
    }

    struct node* slow = *head_ref;
    struct node* fast = *head_ref;
    struct node* prev = NULL;
    while (fast != NULL && fast->next != NULL) 
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev != NULL) 
    {
        prev->next = new_node;
        new_node->next = slow;
    }
    else 
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
}

int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* tail = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    tail = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = tail;

    tail->data = 5;
    tail->next = NULL;
    void printList(struct node* head)
    {
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

    printf("Original list:\n");
    printList(head);

    insertAtMiddle(&head, 3);

    printf("After inserting 3 at middle:\n");
    printList(head);

    return 0;
}






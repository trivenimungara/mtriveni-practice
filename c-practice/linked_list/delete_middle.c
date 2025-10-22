#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete the middle node
void deleteMiddle(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        printf("List too short to delete middle node.\n");
        return;
    }

    struct Node *slow = *head, *fast = *head, *prev = NULL;

    // Move fast by 2 steps and slow by 1 step
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Now slow is at middle, prev is before it
    prev->next = slow->next;
    free(slow);
}

int main() {
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list:\n");
    display(head);

    deleteMiddle(&head);

    printf("After deleting middle node:\n");
    display(head);

    return 0;
}


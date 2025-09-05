#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;   
        curr->next = prev;   
        prev = curr;        
        curr = next;         
    }
    return prev; 
}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* newNode(int value) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

int main() {
   
    struct Node* head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(30);

    printf("Original list:\n");
    printList(head);

    head = reverse(head);

    printf("Reversed list:\n");
    printList(head);

    return 0;
}


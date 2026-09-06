//code developed by Class CR Pranav Kankariya Sycse B 4
// this code only has functions to print, add-to-start and delete-last nodes in singly linked list.

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* add_start(struct Node** ref, int d){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = d;
    newNode->next = *ref;
    *ref = newNode;
    return newNode;
}

void delete_last(struct Node** ref){
    struct Node* temp = *ref;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void Print(struct Node **ref){
    struct Node* temp = *ref;
    while(temp != NULL){
        printf("Data: %d\n", temp->data);
        temp = temp->next;
    }
    free(temp);
}

int main() {
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* th = (struct Node*)malloc(sizeof(struct Node));
    struct Node *head = first;
    first->data = 20;
    first->next = sec;
    sec->data = 30;
    sec->next = th;
    th->data = 40;
    th->next = NULL;
    Print(&head);
    printf("\n");
    struct Node* start = add_start(&head, 10);
    Print(&head);
    printf("\n");
    delete_last(&head);
    Print(&head);




    free(head);
    free(first);
    free(sec);
    free(th);
    return 0;
}

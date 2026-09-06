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

struct Node* add_last(struct Node** ref, int d){
    struct Node* ltNode = (struct Node*)malloc(sizeof(struct Node));
    ltNode->next = NULL;
    ltNode->data = d;
    struct Node* t = *ref;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = ltNode;
    return ltNode;
    free(t);
}

void delete_first(struct Node** ref){
    struct Node* t = *ref;
    t = t->next;
    *ref = t;
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
    struct Node* last = add_last(&head, 50);
    printf("\n");
    Print(&head);
    printf("\n");
    delete_first(&head);
    Print(&head);


    free(first);
    free(sec);
    free(th);
    return 0;
}

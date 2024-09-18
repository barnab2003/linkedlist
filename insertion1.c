#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next; 

};

void traverse(struct node*  ptr){
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }
}
struct node * insertAtFirst(struct node *head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data= data;
    return ptr;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
   
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    traverse(head);
    head= insertAtFirst(head,69);
    traverse(head);
    
    return 0;
}
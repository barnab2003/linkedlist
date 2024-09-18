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
struct node * insertAtEnd(struct node *head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data =data;
    struct node * p = head;
    while (p->next!=NULL)
    {
        p= p->next;
    }
    p->next= ptr;
    ptr->next=NULL;
    return head;   
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
    head = insertAtEnd(head,69);
    traverse(head);
    
    return 0;
}
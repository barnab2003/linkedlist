#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next; 
   
};

void traverse(struct node* head){   //Defines a function named traverse that takes a pointer to a node structure as an argument. 
    struct node *ptr = head;

    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);

}
struct node* insertfirst(struct node *head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p = head->next;
    while(p->next!= head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    //in heap(dynamic memory)
    head = (struct node*) malloc(sizeof(struct node)); 
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    
    head->data = 7;      //Sets the data of the first node (head) to 7
    head->next = second; //Sets the next pointer of the first node (head) to point to the second node (second).

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = head;

    traverse(head);
    head= insertfirst(head,69);
    traverse(head);
    
    return 0;
}
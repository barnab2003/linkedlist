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
struct node* deletefirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
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

    
    head->data = 7;      
    head->next = second; 

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    traverse(head);
    head= deletefirst(head);
    traverse(head);
    
    return 0;
}
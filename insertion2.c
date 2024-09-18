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
struct node * insertAtIndex(struct node *head,int data,int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while (i!=index-1) //The loop continues until i is equal to index-1,
                       // which means p will be pointing to the node just before where the new node should be inserted.
    {
        p = p->next;
        i++;
    }                                                         
    ptr->data = data; //The new node (ptr) is initialized with the data passed to the function (data).
    ptr->next = p->next; //The next pointer of the new node (ptr->next) is set to point to the node that p was previously pointing to (p->next).
    p->next = ptr;      //This connects the new node to the rest of the list.
    return head; //The next pointer of the node p (which is now just before the desired index) is updated to point to the new node (p->next = ptr),
                // effectively inserting the new node into the list at the specified index.
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
    head= insertAtIndex(head,69, 1);
    traverse(head);
    
    return 0;
}
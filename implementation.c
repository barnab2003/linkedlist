#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next; 
    //This declares a pointer to another structure of the same type (struct node).
    // The pointer next is used to point to the next node in a linked list.
};

void traverse(struct node*  ptr){   //Defines a function named traverse that takes a pointer to a node structure as an argument. 
    while(ptr!=NULL){               //The loop runs as long as ptr (the current node pointer) is not NULL,
                                    //meaning there are more nodes to traverse.
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }

}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    //in heap(dynamic memory)
    head = (struct node*) malloc(sizeof(struct node)); 
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    //Allocates memory for the first node (head) in the linked list using malloc().
    //malloc() returns a pointer to the allocated memory, which is cast to the type struct node*.
    //Similarly, allocate memory for the second and third nodes.
    
    head->data = 7;      //Sets the data of the first node (head) to 7
    head->next = second; //Sets the next pointer of the first node (head) to point to the second node (second).

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    traverse(head);
    
    return 0;
}
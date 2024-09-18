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
struct node* deleteatindex(struct node * head,int index){
    struct node* p = head;
    struct node* q= head->next;
    for (int i= 0; i < index-1; i++){
        p=p->next;
        q=q->next;
    }

    p->next = q->next;
    free(q);
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
    head= deleteatindex(head,2);
    traverse(head);
    
    return 0;
}
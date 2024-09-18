#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
};

// Function to traverse and print the linked list
void traverse(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;
    int n, i, data;

    printf("How many nodes do you want to create? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Allocate memory for the new node
        temp = (struct node*) malloc(sizeof(struct node));

        // Input data for the new node
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &temp->data);
        temp->next = NULL;

        if (head == NULL) {
            // If this is the first node, set it as the head
            head = temp;
        } else {
            // Otherwise, link the new node to the last node
            current->next = temp;
        }

        // Move the current pointer to the new node
        current = temp;
    }

    // Traverse and print the linked list
    printf("\nThe linked list is:\n");
    traverse(head);

    return 0;
}

// create a struct for a linked list and a function to insert in the end of the list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void insert(struct node **head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("    ");           // to separate the lists              
}       









#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// declaration de la list;
struct Node {
  int value;
  struct Node *next;
};

// insertion a la tete de la liste_chainee;
void push(struct Node **head, int data) {
  struct Node *new_node = NULL;
  new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->value = data;
  new_node->next = *head;
  *head = new_node;
}

// ajouter a la fin de la liste
void append(struct Node *head, int data) {
  struct Node *new_node = NULL;
  new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->value = data;
  new_node->next = NULL;
  struct Node *temp;
  temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = new_node;
}
// insert after element
void insert_after_element(struct Node *node, int data) {
  struct Node *new_node = NULL;
  new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->value = data;
  new_node->next = node->next;
  node->next = new_node;
}

// fonction d'affichage;
void show_linked_list(struct Node *head) {
  struct Node *temp;
  temp = head;
  int count = 1;
  while (temp != NULL) {
    printf(" %d Node =  %d | ", count, temp->value);
    temp = temp->next;
    count++;
  }
  printf("\n");
}

int main() {

  struct Node *head = NULL;
  push(&head, 11);
  push(&head, 14);
  show_linked_list(head);
  insert_after_element(head, 13);
  show_linked_list(head);
  insert_after_element(head->next->next, 0);
  show_linked_list(head);
  append(head, 99);
  show_linked_list(head);
  return 0;
}

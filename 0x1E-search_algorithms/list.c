#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* Function to create a new node */
ListNode *create_node(int data) {
    ListNode *new_node = malloc(sizeof(ListNode));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

/* Function to free the entire list */
void free_list(ListNode *head) {
    ListNode *current = head;
    ListNode *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

/* Function to print the entire list */
void print_list(ListNode *head) {
    ListNode *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

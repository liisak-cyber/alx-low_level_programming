#ifndef LIST_H
#define LIST_H

/* Define your node structure */
typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

/* Function prototypes */
ListNode *create_node(int data);
void free_list(ListNode *head);
void print_list(ListNode *head);

#endif /* LIST_H */

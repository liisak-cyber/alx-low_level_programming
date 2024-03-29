#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: The head of the dlistint_t list.
 *
 * Description:
 * This function frees each node of doubly linked list starting from the head.
 */
void free_dlistint(dlistint_t *head)
{
	/* Declare a temporary node pointer. */
	dlistint_t *tmp;

	/* Iterate through the list and free each node. */
	while (head)
	{
		/* Store the next node in the temporary pointer. */
		tmp = head->next;
		/* Free the current node. */
		free(head);
		/* Move to the next node. */
		head = tmp;
	}
}


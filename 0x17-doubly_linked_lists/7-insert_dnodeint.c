#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to be stored in the new node.
 *
 * Description:
 * This function inserts a new node at the specified index in
 * a doubly linked list. If successful, it returns the address of the
 * new node; otherwise, it returns NULL. If not possible to add new node at
 * the specified index, the function does not modify
 * the list and returns NULL.
 *
 * Return: The address of the new node if successful, otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	/* If the index is 0, insert at the beginning of the list. */
	if (idx == 0)
	return (add_dnodeint(h, n));

	/* Traverse the list to reach the desired position. */
	for (; idx != 1; idx--)
	{
	tmp = tmp->next;
	if (tmp == NULL)
	return (NULL);
	}

	/* If the desired position is at the end, insert at the end of the list. */
	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node. */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	/* Set the value of the new node and update the links. */
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}


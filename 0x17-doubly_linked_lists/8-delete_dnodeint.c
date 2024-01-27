#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node from a dlistint_t at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Description:
 * This function deletes a node from a doubly linked list at a given index.
 * If the deletion is successful, it returns 1. If the deletion fails (e.g., if
 * the index is out of bounds), it returns -1.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    /* Implementation of the function goes here. */
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	/* If the list is empty, return -1 indicating failure. */
	if (*head == NULL)
	return (-1);

	/* Traverse the list to reach the desired index. */
	for (; index != 0; index--)
	{
	if (tmp == NULL)
	return (-1);
	tmp = tmp->next;
	}

	/* If the node to delete is the head node. */
	if (tmp == *head)
	{
	*head = tmp->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	}
	/* If the node to delete is not the head node. */
	else
	{
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
	tmp->next->prev = tmp->prev;
	}

	/* Free the memory of the deleted node. */
	free(tmp);
	return (1);
}


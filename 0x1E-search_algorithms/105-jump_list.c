#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present in list or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *current = list, *prev = NULL;
    size_t jump, step;

    if (list == NULL || size == 0)
        return NULL;

    jump = (size_t)sqrt(size);
    while (current && current->n < value) {
        prev = current;
        step = jump;
        while (current->next && current->index < step) {
            current = current->next;
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        }
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    }

    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
    while (prev && prev->index <= current->index) {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}


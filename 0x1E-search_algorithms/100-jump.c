#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size); // Jump step
    size_t prev = 0; // Previous step

    if (array == NULL || size == 0)
        return -1;

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

    // Jump through the array
    while (array[step] < value && step < size) {
        prev = step;
        printf("Value checked array[%lu] = [%d]\n", step, array[step]);
        step += sqrt(size);
        if (step >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    // Perform linear search in the found range
    for (size_t i = prev; i <= step && i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1; // Value not found
}


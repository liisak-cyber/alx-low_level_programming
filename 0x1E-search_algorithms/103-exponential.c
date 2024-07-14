#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Perform a binary search on a sorted integer array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index where the value is found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;

    while (low <= high)
    {
        size_t mid = (low + high) / 2;

        printf("Searching in array: ");
        print_array(array, low, high);

        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return mid;
    }

    return -1; /* Value not found */
}

/**
 * exponential_search - Search for a value in a sorted integer array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index where the value is found, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index = 1;

    if (array == NULL || size == 0)
        return -1;

    /* Find the range for binary search */
    while (index < size && array[index] <= value)
        index *= 2;

    /* Perform binary search on the found range */
    return binary_search(array, index / 2, (index < size - 1) ? index : size - 1, value);
}

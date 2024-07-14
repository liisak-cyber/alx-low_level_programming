#include <stdio.h>
#include "search_algos.h"
#include "print_array.h"
/**
 * recursive_advanced_binary - Perform a binary search recursively on a sorted integer array.
 * @array: Pointer to the first element of the array.
 * @low: Starting index of the search range.
 * @high: Ending index of the search range.
 * @value: Value to search for in the array.
 *
 * Return: Index where the value is found, or -1 if not found.
 */
static int recursive_advanced_binary(int *array, size_t low, size_t high, int value)
{
    if (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");

        print_array(array, low, high);

        if (array[mid] == value)
            return mid;
        else if (array[mid] > value)
            return recursive_advanced_binary(array, low, mid - 1, value);
        else
            return recursive_advanced_binary(array, mid + 1, high, value);
    }

    return -1; /* Value not found */
}

/**
 * advanced_binary - Search for a value in a sorted integer array using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index where the value is found, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return recursive_advanced_binary(array, 0, size - 1, value);
}

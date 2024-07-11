#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using an advanced version of binary search.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where the first occurrence of value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return recursive_advanced_binary(array, 0, size - 1, value);
}

/**
 * recursive_advanced_binary - Recursively searches for a value in a sorted array
 *                             using an advanced version of binary search.
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the array to search in
 * @high: Ending index of the array to search in
 * @value: Value to search for
 *
 * Return: The index where the first occurrence of value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
static int recursive_advanced_binary(int *array, size_t low, size_t high, int value)
{
    if (low > high)
        return -1;

    size_t mid = low + (high - low) / 2;

    printf("Searching in array:");
    for (size_t i = low; i <= high; ++i) {
        printf(" %d", array[i]);
        if (i < high)
            printf(",");
    }
    printf("\n");

    if (array[mid] == value) {
        if (mid == 0 || array[mid - 1] != value)
            return mid;
        else
            return recursive_advanced_binary(array, low, mid - 1, value);
    } else if (array[mid] < value) {
        return recursive_advanced_binary(array, mid + 1, high, value);
    } else {
        return recursive_advanced_binary(array, low, mid - 1, value);
    }
}


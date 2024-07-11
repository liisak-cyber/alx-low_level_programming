#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Performs binary search on a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the array to search in
 * @high: Ending index of the array to search in
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
static int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high) {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array:");
        for (size_t i = low; i <= high; ++i) {
            printf(" %d", array[i]);
            if (i < high)
                printf(",");
        }
        printf("\n");

        printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Value not found
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t index = 1;
    while (index < size && array[index] < value) {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        index *= 2;
    }

    size_t prev = index / 2;
    size_t high = (index < size) ? index : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", prev, high);

    return binary_search(array, prev, high, value);
}


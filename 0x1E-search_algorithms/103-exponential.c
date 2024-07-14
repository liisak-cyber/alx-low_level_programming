#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Performs binary search on a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
static int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (size_t i = low; i <= high; ++i)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t index = 1;

	while (index < size && array[index] <= value)

		index *= 2;

	size_t prev = index / 2;

	printf("Value found between indexes [%lu] and [%lu]\n", prev, index);

	return (array, prev, index < size - 1 ? index : size - 1, value);
}

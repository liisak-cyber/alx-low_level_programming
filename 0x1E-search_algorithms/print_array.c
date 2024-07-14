#include "print_array.h"

void print_array(int *array, size_t start, size_t end)
{
    printf("Array: ");
    for (size_t i = start; i <= end; i++)
    {
        if (i > start)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "list.h"
#include "skiplist.h"

/* 0. Linear search */
int linear_search(int *array, size_t size, int value);

/* 1. Binary search */
int binary_search(int *array, size_t size, int value);

/* 7. Jump search */
int jump_search(int *array, size_t size, int value);

/* 9. Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/* 10. Exponential search */
int exponential_search(int *array, size_t size, int value);

/* 11. Advanced binary search */
int advanced_binary(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */

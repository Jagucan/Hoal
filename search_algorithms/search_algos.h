#ifndef _search_algos_
#define _search_algos_

/* LIBRARIES */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/* PROTOTYPES */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif

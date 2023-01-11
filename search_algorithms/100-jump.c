#include "search_algos.h"

/**
 * 
 * 
 * 
*/

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	size_t i = 0;
	
	if (!array)
		return (-1);

	if (!size)
		return (-1);

	
	for (i = 0; i < size; i += step)
	{
		printf("Value checked array [%d] and [%d]\n", i, i);
		if (array[i] >= value)
			break;
		 prev = i;
	}
	
	printf("Value found between indexes [%d] and [%d]\n", i, i+step);
	for (i = prev; i < fmin(size, prev + step); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

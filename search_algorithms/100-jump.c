#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers.
 * @array: Is a pointer to the first element of the array to search.
 * @size: Is the number of elements.
 * @value: Is the value to search.
 * Return: Return -1 If value is not present in array or if array is NULL.
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
		printf("Value checked array [%ld] and [%ld]\n", i, i);
		if (array[i] >= value)
			break;
		 prev = i;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
	for (i = prev; i < fmin(size, prev + step); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

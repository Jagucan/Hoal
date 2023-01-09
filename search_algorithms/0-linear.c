#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Is a pointer to the first element of the array to search.
 * @size: Is the number of elements in array.
 * @value: Is the value to search.
 * Return: Return -1 if value is not present in array or if array is NULL.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	if (!array)
		return (-1);

	if (!size)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}

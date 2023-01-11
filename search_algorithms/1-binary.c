#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: Is a pointer to the first element of the array to search.
 * @size: Is the number of elements.
 * @value: Is the value to search.
 * Return: Return -1 If value is not present in array or if array is NULL.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l_limit = 0;
	size_t u_limit = size - 1;
	size_t aux = l_limit;
	int mid;

	if (!array)
		return (-1);

	if (!size)
		return (-1);

	while (l_limit <= u_limit)
	{
		printf("Searching in array: ");
		for (aux = l_limit; aux < u_limit; aux++)
			printf("%d, ", array[aux]);

		if (aux == u_limit)
			printf("%d", array[aux]);

		printf("\n");
		mid = (l_limit + u_limit) / 2;

		if (array[mid] == value)
			return mid;

		else if (array[mid] < value)
			l_limit = mid + 1;

		else 
			u_limit = mid - 1;

	}
	return (-1);
}

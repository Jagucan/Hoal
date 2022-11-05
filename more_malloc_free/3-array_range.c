#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Is a Integer
 * @max: Is a Integer
 * Return: Return a pointer.
 */

int *array_range(int min, int max)
{
	int *arr;
	int a, i = max - min;


	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (i + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; a <= i; a++)
	{
		arr[a] = min;
		min++;
	}

	return (arr);

}

#include "function_pointers.h"

/**
 * int_index - Search an integer.
 * @array: Is an array.
 * @size: Is the number of element.
 * @cmp: Is a pointer to function.
 * Return: Return an integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (cmp == NULL || array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
			return (num);
	}

	return (-1);
}

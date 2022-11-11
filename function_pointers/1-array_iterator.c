#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @size: Is the size of the array.
 * @action: Is a pointer to the function.
 * @array: Is an array.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == NULL || action == NULL)
		return;

	for (num = 0; num < size; num++)
	{
		action(array[num]);
	}
}

#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: Is an string.
 * @n: Is the numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_numbers;
	unsigned int a;

	va_start(print_numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(print_numbers, int));

		if (a < n - 1)
		printf("%s", separator);
	}

	printf("\n");    
	va_end(print_numbers);
}

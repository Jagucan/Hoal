# include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @n: Is the number of strings.
 * @separator: Is the string to be printed between the strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_string;
	unsigned int a;
	char *str;

	va_start(print_string, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(print_string, int);
		printf("%s", (str) ? str : "(nil)");

		if (a < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");

	va_end(print_string);
}

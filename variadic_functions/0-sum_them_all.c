#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum.
 * @n: Is the parameters.
 * Return: Return sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_par;
	int sum = 0;
	unsigned int a;

	va_start(sum_par, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(sum_par, int);
	}

	va_end(sum_par);
	return (sum);
}

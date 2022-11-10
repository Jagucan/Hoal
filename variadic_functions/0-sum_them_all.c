#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum.
 * @n: Is the parameters.
 * Return: Return sum.
*/

int sum_them_all(const unsigned int n, ...);
{
	va_list sum_par;
	int sum = 0, a = 0;

	va_start(sum_par, n);

	while (a < n)
	{
		sum += va_arg(sum_par, int);
		a++;
	}

	va_end(sum_par);
	return(sum);
}

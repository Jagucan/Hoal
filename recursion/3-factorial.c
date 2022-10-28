<<<<<<< HEAD
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Is a number.
 * Return: Return the factorial of a number.
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}

}
=======
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Is a number.
 * Return: Return the factorial of a number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n*factorial(n - 1));
	}

}
>>>>>>> 83562379d8a22daea05bd2e568971e39412de5c7

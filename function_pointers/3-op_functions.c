#include "3-calc.h"

/**
 * op_add - Add a and b.
 * @a: Is a number.
 * @b: Is a number.
 * Return: Returns the result of the operation.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Sub a and b.
 * @a: Is a number.
 * @b: Is a number.
 * Return: Returns the result of the operation.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Mul a and b.
 * @a: Is a number.
 * @b: Is a number.
 * Return: Returns the result of the operation.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Div a and b.
 * @a: Is a number.
 * @b: Is a number.
 * Return: Returns the result of the operation.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Mod a and b.
 * @a: Is a number.
 * @b: Is a number.
 * Return: Returns the result of the operation.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

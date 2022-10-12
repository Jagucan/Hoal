#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @x: Is an number.
 * Return: The number of the last digit.
 */

int print_last_digit(int x)
{
	int num = x % 10;

	if (num < 0)
		num *= -1;


	_putchar(num + '0');

	return (num);

}

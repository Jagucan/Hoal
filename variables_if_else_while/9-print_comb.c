#include <stdio.h>

/**
 * main - print possible combinations of numbers
 * Return: 0 every time
 */

int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);

		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

return (0);

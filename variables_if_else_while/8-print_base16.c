#include <stdio.h>

/**
 * main - print the numbers of base 16
 * Return: 0 every time
 */

int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
		putchar('\n');

return (0);
}

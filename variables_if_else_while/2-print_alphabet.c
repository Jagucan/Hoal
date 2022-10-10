#include <stdio.h>

/**
 * main - contain putchar not printf
 * return 0 every time
 */


int main(void)
{
	char j = 'a';

	while (j<='a')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

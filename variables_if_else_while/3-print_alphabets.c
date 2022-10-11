#include <stdio.h>

/**
 * main contain putchar 
 * Return 0 every time
 */

 int main(void)
{
	char j;
	j = 'a';		
	j = 'A';

	while (j <= 'z')
	{
	putchar(j);
	j++;
	}
	while (j <= 'Z')
	{
	putchar(j);
	j++;
	}
	putchar('\n')
	return (0);
}

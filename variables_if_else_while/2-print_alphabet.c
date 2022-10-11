#include <stdio.h>

/**
 * main contain putchar not printf for prints the alphabet
 * return 0 every time
 */

int main(void)
{
	char j;
	
	j = 'a';

	while(j<='z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main contain putchar and print an alphabet
 * Return 0 every time
 */

int main(void)
{

	char j;
	for (j = 'a'; j <= 'z'; j++)
        {
		putchar(j);
        }
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}	
		putchar('\n');
return (0);
}

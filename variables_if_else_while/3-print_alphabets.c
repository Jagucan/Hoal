#include <stdio.h>

/**
 * main - print an alphabet in lowercases and uppercase
 * Return: 0 every time
 * main contain putchar and for
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

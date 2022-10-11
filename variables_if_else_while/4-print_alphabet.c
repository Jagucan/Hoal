#include <stdio.h>

/**
 * main - print an alphabet in lowercase excep the letters p an e
 * Return: 0 every time
 * main contain putchar
 */

int main(void)
{
	char j;

	for(j = 'a'; j <= 'z'; j++)
	{
		if(j != 'e' && j != 'q')
		{
			putchar(j);
		}
	}
		putchar(''\n');
return (0);
}

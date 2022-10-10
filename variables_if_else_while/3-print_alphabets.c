#include <stdio.h>

/**
 * main contain putchar 
 * Return 0 every time
 */

 int main(void)
{
	char j  = "a";
	char J  = "A";

	while (j<'z');
	{
	putchar("%j\n", j);
	j++;
	}
	while (J<='Z');
	{
	putchar("%J\n", J);
	J++;
	}
	return (0);
}

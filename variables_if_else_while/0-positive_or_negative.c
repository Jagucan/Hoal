#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Return: 0 every time
 *main - assign a random number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	if(n > 0)
	       printf("is positive/n", n);
	else if(n < 0)
		printf("in negative/n", n);
	else 
		printf("is zero/n", n);
	return (0);
}

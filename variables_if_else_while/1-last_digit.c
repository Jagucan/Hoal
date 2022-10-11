#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main contain if and else */
/* return 0 every time */

int main(void)
{
	int n;
	int j;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	j = n % 10;
	if (j == 0)
		{
		printf("Last digit of %i is %i and is 0\n", n, j);
		}
	else if (j > 5)
		{
		printf("Last digit of %i is %i and is greater than 5\n", n, j);
		}
	else
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, j);
		}
	return (0);
}

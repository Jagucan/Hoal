#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main - contain if and else */
/* return 0 every time */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int j;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	j = n % 10;
	if (j == 0)
		{
		printf("Last digit of %i is %i and is 0\n", j, n);
		}
	else if (j > 5)
		{
		printf("Last digit of %i is %i and is greater than 5\n", j, n);
		}
	else if 
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", j, n);
		}
	return (0);
}

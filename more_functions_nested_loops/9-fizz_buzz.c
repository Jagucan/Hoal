#include <stdio.h>

/**
 * int main - Prints the numbers from 1 to 100.
 * @num: Are the number form 1 to 100.
 */

int main(void)
{

	int num;

	for (num = 1; num <= 99; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)

			printf("FizzBuzz ");

		else if (num % 3 == 0)

			printf("Fizz ");

		else if (num % 5 == 0)

			printf("Buzz ");

		else
			printf("%i ", num);
	}

	printf("Buzz\n");
	return (0);
}

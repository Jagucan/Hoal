#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argv: Is a strings.
 * @argc: Is a number of strings.
 * Return: Return 0 if add is positive numbers.
 */

int main(int argc, char *argv[])
{
	int a;
	int i;
	int add = 0;

	for (a = 1; a < argc; a++)
	{
		for (i = 0; argv[a][i] != '\0'; i++)
		{
			if (argv[a][i] < 48 || argv[a][i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[a]);
	}

	printf("%d\n", add);
	return (0);
}

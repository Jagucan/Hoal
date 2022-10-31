#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Multiplies two numbers.
 * @argv: Is a strings.
 * @argc: Is a number of strings.
 * Return: Return 1 if argc != 3.
 */

int main(int argc, char *argv[])
{
	int a;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (a = 0; a < argc; a++)
			mul = atoi(argv[1]) * atoi(argv[2]);
	}

	printf("%d\n", mul);
	return (0);
}


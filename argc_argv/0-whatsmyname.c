#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argv: Is a strings.
 * @argc: Is a number of strings.
 * Return: 0 every time.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

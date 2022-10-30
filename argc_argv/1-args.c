#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argv: Is a strings, but it's unused.
 * @argc: Is a number of strings.
 * Return: 0 every time.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 0)
		printf("%d\n", argc - 1);

	return (0);
}

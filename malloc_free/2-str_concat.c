#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: Is the string 1.
 * @s2: Is the string 2.
 * Return: Return the pointer concatenate.
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, i = 0, n = 0, u = 0;
	int sum = 0;
	char *str;

	if (!s1 && !s2)
		return (malloc(sizeof(char)));
	if (s1)
		while (s1[a] != '\0')
		a++;
	if (s2)
		while (s2[i] != '\0')
			i++;
	sum = a + i;
	str = malloc(sizeof(char) * sum + 1);
	if (!str)
		return (NULL);
	for (n = 0; n < sum; n++)
	{
		if (n < a)
			str[n] = s1[n];
		else
		{
			str[n] = s2[u];
			u++;
		}
	}
	str[n] = '\0';
	return (str);
}

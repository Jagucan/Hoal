#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Is a pointer.
 * @needle: Is a pointer.
 * Return: Return a pointer.
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
					if (needle[a + 1] == '\0')
						return (haystack);

					a++;
				}

			while (haystack[a] == needle[a]);
		}

			haystack++;
	}

	return ('\0');

}
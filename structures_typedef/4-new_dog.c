#include "dog.h"

char *_strdup(char *str);

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: Is a pointer.
 * Return: eturns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int a = 0;
	int i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[a])
		a++;
	dup = malloc(sizeof(char) * (a + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: Is a string.
 * @age: Is a float.
 * @owner: Is a string.
 * Return: Return a new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}

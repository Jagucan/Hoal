#include "dog.h"

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
		return(NULL);
	}

	dog->name = _strdup(name);
	if (dog->name = NULL)
	{
		free(dog);
		return(NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner = NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}

	dog->age = age;
	return(dog);
}

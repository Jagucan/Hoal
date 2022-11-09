#include "dog.h"

/**
 * init_dog - Initialize a variable.
 * @d: Is the structure.
 * @name: Is a string.
 * @age: Is a number.
 * @owner: Is a string. 
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

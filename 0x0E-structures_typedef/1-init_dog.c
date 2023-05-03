#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog
 * @d: the pointer to struct dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Description: This function creates a new struct dog and initializes
 *
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

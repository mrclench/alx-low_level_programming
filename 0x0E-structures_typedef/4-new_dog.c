#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog
 *
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int count;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (count = 1, ptr = name; *ptr; len++)
		ptr++;
	d->name = malloc(count);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (count = 1, ptr = owner; *ptr; count++)
		ptr++;
	d->owner = malloc(count);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (count = 0; *name != 0; count++, name++)
		d->name[count] = *name;
	d->name[count] = 0;
	for (count = 0; *owner != 0; count++)
		d->owner[count] = *owner++;
	d->owner[count] = 0;
	d->age = age;

	return (d);
}

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function to free dynamically allocated memory
 * @d: pointer to allocated memory
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d);
	free(d->name);
	free(d->owner);
	}
}

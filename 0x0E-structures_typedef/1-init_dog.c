#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the variable
 * @name: pointer to the member name
 * @age: member age
 * @owner: pointer to the member owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (char *)malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		printf("memory could not be allocated for name.\n");
		return;
	}
	strcpy(d->name, name);

	d->owner = (char *)malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		printf("memory could not be allocated for owner.\n");
		free(d->name);
		return;
	}
	strcpy(d->owner, owner);

	d->age = age;
}

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
	if (d == NULL)
	d->name = 0;
	strcpy(d->name, name);
	d->owner = (char *)malloc(strlen(owner) + 1);
	if (d == NULL)
	d->owner = 0;
	strcpy(d->owner, owner);
	d->age = age;
}

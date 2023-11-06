#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == 0)
	return (0);
	d->name = (char *)malloc(strlen(name) + 1);
	if (d->name == 0)
	{
		free(d);
		return (0);
	}
	strcpy(d->name, name);
	d->owner = (char *)malloc(strlen(owner) + 1);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (0);
	}
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - organize data for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: This is a structure that categorizes data of each dog
 * in the system
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

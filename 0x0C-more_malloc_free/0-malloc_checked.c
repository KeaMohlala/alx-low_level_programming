#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory size to be allocated
 * Return: none
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	if (b < INT_MAX)
	{
	ptr = malloc(b);
	if (ptr == 0)
	return (0);
	}

	else
	exit(98);

	return (ptr);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - move memory block using malloc and free
 * @ptr: pointer to old memory block
 * @old_size: old memory block in bytes
 * @new_size: new memory block in bytes
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int num_bytes;
	int *str;

	if (new_size == old_size)
	return (ptr);

	if (ptr == 0)
	{
		str = malloc(new_size);
		if (str == 0)
		return (0);
		return (str);
	}

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	/*allocate new memory block*/
	str = malloc(new_size);
	if (str == 0)
	return (0);

	/*copy old memory to new memory block*/
	if (old_size < new_size)
	num_bytes = old_size;
	else
	num_bytes = new_size;
	memcpy(str, ptr, num_bytes);

	free(ptr);
	return (str);
}

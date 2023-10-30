#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of characters
 * @size: size of the array
 * @c:character to be allocated memory on the heap
 * Return:pointer to allocated memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	return (0);
	ptr = (char *)malloc(size);
	if (ptr == 0)
	return (0);
	else
	{
		/**
		 *  memory initialization
		 *  initialize each element of the array with the
		 *  character 'c' passed to the function
		 */
		for (i = 0; i < size; i++)
		ptr[i] = c;
	}
	return (ptr);
}

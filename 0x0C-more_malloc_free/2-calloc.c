#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to allocate memory initiliazed to 0 for an array
 * @nmemb:number of elements in the array
 * @size: size bytes of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
	return (0);


	/*use meset to fill the memory blocks with the value 0*/
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

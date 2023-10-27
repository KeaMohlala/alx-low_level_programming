#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area bytes will be copied to
 * @src: memory area from which bytes will be copied
 * @n: number of bytes to be copied
 * Return: pointer returns to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

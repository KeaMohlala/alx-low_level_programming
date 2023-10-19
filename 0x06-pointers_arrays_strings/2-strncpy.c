#include "main.h"

/**
 * _strncpy - copy string to empty buffer
 * @dest: pointer to destination
 * @n: number of characters to be copied
 * @src: pointer to source string
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	}

	while (src[k] != '\0' && k < (n - 1))
		;
	return (dest);
}

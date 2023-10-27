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
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}

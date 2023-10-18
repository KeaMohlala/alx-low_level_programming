#include "main.h"

/**
 * _strcat - concetanate two strings
 * @dest: destination string
 * @src: source string
 * Return: returns resulting concetanated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

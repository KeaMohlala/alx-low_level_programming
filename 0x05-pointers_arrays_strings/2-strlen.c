#include "main.h"

/**
 * _strlen - fuction to determine length of a string
 *Return: length of the string
 *@s: pointer to the first character of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

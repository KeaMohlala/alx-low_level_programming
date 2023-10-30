#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to determine length of a string
 * Return: length of the string
 * @str: pointer to the first character of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * _strdup - function that returns pointer to newly allocated space,
 * which contains a copy of the given string as a parameter
 * @str: string to be copied
 * Return: pointer to allocated memory on heap
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == 0)
	return (0);
	ptr = (char *)malloc(_strlen(str) + 1);
	if (ptr == 0)
	return (0);
	else
	{
		for (i = 0; str[i]; i++)
		ptr[i] = str[i];
		ptr[i] = '\0';
	}
	return (ptr);
}

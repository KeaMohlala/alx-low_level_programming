#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to detrmine the length of a string
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
 * str_concat - concetenates two strings to newly located
 * memory on the heap
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new concetenated string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
char *ptr;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

ptr = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);
if (ptr == 0)
return (0);
while (s1[i])
{
ptr[i] = s1[i];
i++;
}
while (s2[j])
{
ptr[i] = s2[j];
j++;
i++;
}
ptr[i] = '\0';
return (ptr);
}

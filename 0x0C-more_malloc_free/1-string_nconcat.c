#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concetenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 * Return: pointer to new string at new memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr;

	if (s1 == 0)
	s1 = "";
	if (s2 == 0)
	s2 = "";

	if (n >= sizeof(s2))
	ptr = malloc(sizeof(s1) + sizeof(s2));
	if (n < sizeof(s2))
	ptr = malloc(sizeof(s1) + ((n / 100) * sizeof(s2)));
	if (ptr == 0)
	return (0);

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

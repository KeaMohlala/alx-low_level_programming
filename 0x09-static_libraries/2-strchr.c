#include"main.h"

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be examined
 * @c: character to be searched in the string
 * Return: returns a pointer to the first occurrence of the
 * character or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}

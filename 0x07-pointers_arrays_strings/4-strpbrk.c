#include "main.h"

/**
 * _strpbrk - searches as string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: returns pointer to character in s that matches one of the characters
 * in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}


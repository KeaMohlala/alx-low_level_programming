#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of characters in the initial segment which
 * consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}
	if (s[i] != accept[j])
	{
		return (count);
	}
	}
	return (count);
}


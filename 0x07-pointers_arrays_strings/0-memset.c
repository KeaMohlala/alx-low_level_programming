#include "main.h"

/**
 * _memset - fills memory block with a particlar value
 * @s: starting address of memory to be filled
 * @b: character to be filled
 * @n: number of byted to be added
 * Return: pointer goes back to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: poinetr to the string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
		return (i);
	}
	else
	return (0);
}

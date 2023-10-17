#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s:pointer to the string
 */

void print_rev(char *s)
{
	int i = 0;
	char *original_s = s;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(original_s[i]);
	}
	_putchar('\n');
}

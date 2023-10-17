#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: pointer interger for the string
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (n /= 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}

	else if (n % 2 != 0)
	{
		for (n = ((n + 1) / 2); str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

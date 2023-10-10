#include "main.h"

/**
 * print_sign - prints sign of a number
 * Return: 1 if greater than zero, -1 if less than zero
 * @n : number to be checked
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}

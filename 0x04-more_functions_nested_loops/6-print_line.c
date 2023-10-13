#include "main.h"

/**
 * print_line - function to print line
 * @n: number of times '_' should be printed to draw the line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	/*_putchar('\n');*/
}

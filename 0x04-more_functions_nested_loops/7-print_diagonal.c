#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: no. of times '\' should be printed to draw the diagonal line
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= i; k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= 1; j++)
			{
				_putchar(92);
				_putchar('\n');
			}
		}
}

#include "main.h"

/**
 * print_square- function to create a square pattern using #
 * @size: size of the square to be printed
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar ('\n');
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
				/*_putchar('\n');*/
			}
			_putchar('\n');
		}
}

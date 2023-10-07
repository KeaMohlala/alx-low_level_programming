#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{																putchar(44);															putchar(32)
			;
		}

	}

	putchar('\n');
	return (0);
}

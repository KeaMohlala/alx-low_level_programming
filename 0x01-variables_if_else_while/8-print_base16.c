#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	char hexa;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}

	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');
	return (0);
}

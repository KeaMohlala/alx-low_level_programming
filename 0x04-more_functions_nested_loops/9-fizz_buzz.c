#include <stdio.h>

/**
 * main - entry point function
 * Return: 0
 */

int main(void)
{
	int n;
	char c[5] = "Fizz";
	char b[5] = "Buzz";
	char a[9] = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s ", a);
		else if (n % 5 == 0)
			printf("%s ", b);
		else if (n % 3 == 0)
			printf("%s ", c);
		else if (n != 0)
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}

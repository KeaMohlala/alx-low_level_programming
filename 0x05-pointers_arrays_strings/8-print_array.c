#include <stdio.h>
#include "main.h"

/**
 * print_array- print n elements of an array of integers
 * @a: pointer to the array
 * @n:number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", *(a++));
		n--;
	}
	if (n <= 0)
	{
		printf("%d, %d\n", a[0], a[1]);
	}
	while (n--)
	{
		printf(", %d", *(a++));
	}
	printf("\n");
}

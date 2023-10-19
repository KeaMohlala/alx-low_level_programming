#include "main.h"

/**
 * reverse_array - reverse content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int k;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}

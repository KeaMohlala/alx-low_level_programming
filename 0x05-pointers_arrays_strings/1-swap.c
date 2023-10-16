#include "main.h"

/**
 *swap_int -wap values of intergers using pointers
 * @a: pointer to change value of a to 42
 * @b: pointer to change value of b to 98
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

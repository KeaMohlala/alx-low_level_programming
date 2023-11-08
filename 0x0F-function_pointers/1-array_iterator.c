#include "function_pointers.h"

/**
 * array_iterator - function that executes a function's parameter on each
 * element of the array
 * @array: pointer to integer array
 * @size: size of the array
 * @action: pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	for (i = 0; i < size; i++)
	{
		if (action != 0)
		action(array[i]);
	}
}

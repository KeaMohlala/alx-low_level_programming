#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to integer array
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: first element of array to return a number not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == 0)
	return (-1);

	if (size <= 0)
	return (-1);

	if (cmp != 0)
	{
		while (i < size)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			else
			i++;
		}
		return (-1);
	}
	return (-1);
}

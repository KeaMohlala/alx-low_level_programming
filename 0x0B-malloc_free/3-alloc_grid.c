#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to return a  pointer to a 2D array
 * @width: width of the grid (columns)
 * @height: height of the grid (rows)
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (height <= 0 || width <= 0)
	return (0);

	/*allocate memory for the 1D arrays i.e. array of pointers*/
	ptr = (int **)malloc(height * 8);
	if (ptr == 0)
	return (0);

	/*allocate memory for each 1D array (width) of integers*/
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * 8);
		if (ptr[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (0);
		}
	}

	/*initialize all elements of the array to 0*/
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		ptr[i][j] = 0;
	return (ptr);
}

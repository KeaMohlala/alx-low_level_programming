#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers
* @min: min integer number value
* @max: max integer number value
* Return: pointer to the array
*/

int *array_range(int min, int max)
{
int *ptr;
int num_elements = 0;
int element_size = sizeof(int);
int i, j;

/*check if min is greater than max*/
if (min > max)
return (0);

/*determine the number of elements of the array*/
for (i = min; i <= max; i++)
num_elements++;

/*assign memory for the array of integers*/
ptr = malloc(element_size * num_elements);
if (ptr == 0)
return (0);

/*assign each element of the array the correct value from min to max*/
for (j = 0; j < num_elements; j++)
ptr[j] = min + j;

return (ptr);
}

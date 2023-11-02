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
int *ptr, i;
int num_elements;

/*check if min is greater than max*/
if (min > max)
return (0);

/*determine the number of elements of the array*/
num_elements = max - min + 1;

/*assign memory for the array of integers*/

ptr = malloc(num_elements * sizeof(int));
if (ptr == 0)
return (0);

/*assign each element of the array the correct value from min to max*/
for (i = 0; i < num_elements; i++)
ptr[i] = min + i;

return (ptr);
}

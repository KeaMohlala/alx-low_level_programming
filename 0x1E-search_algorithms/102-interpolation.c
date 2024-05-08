#include "search_algos.h"

/**
* interpolation_search - searches for a value in sorted array of integers
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: index of the value if found, -1 if not found
*/

int interpolation_search(int *array, size_t size, int value)
{
size_t mid, low = 0, high = size - 1;

if (array == NULL)
return (-1);

while (low <= high)
{
mid = low + (((double)(high - low) / (array[high] - array[low])) *
(value - array[low]));
if (mid < size)
printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
else
printf("Value checked array[%lu] is out of range\n", mid);

if (value == array[mid])
return (mid);
else if (value < array[mid])
high = mid - 1;
else
low = mid + 1;
}
return (-1);
}

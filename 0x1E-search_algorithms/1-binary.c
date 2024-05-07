#include "search_algos.h"

/**
* print_array - prints an array of integers
* @array: array to print
* @low: first half of the array
* @high: second half of the array
* Return: void
*/

void print_array(int *array, size_t low, size_t high)
{
size_t i;

printf("Searching in array: ");
for (i = low; i < high; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
}

/**
* binary_search - searches for a value in sorted array of integers
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: index of the value if found, -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t mid;
size_t low = 0, high = size - 1;

if (array == NULL)
return (-1);

while (low <= high)
{
print_array(array, low, high);

mid = (high + low) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] > value)
high = mid - 1;
else
low = mid + 1;
}
return (-1);
}

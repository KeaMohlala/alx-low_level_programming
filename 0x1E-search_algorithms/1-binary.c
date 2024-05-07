#include "search_algos.h"

/**
* print_array - prints an array of integers
* @array: array to print
* @size: size of the array
* Return: void
*/

void print_array(int *array, size_t size)
{
size_t i;

printf("Searching in array: ");
for (i = 0; i < size; i++)
{
if (i < size - 1)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
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
size_t i, mid;
size_t low = 0, high = size - 1;

if (array == NULL)
return (-1);

print_array(array, size);
while (low < high)
{
mid = low + (high - low) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
{
low = mid + 1;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
if (i < high)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
}
else
{
high = mid - 1;
printf("Searching in array: ");
for (i = 0; i <= high; i++)
{
if (i < high)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
}
}
return (-1);
}

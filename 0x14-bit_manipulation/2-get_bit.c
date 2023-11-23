#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
* get_bit - returns value of a bit at a given index
* @n: input number
* @index: index of the bit to get
* Return: value of bit at the index
*/

int get_bit(unsigned long int n, unsigned int index)
{
/* Check if index is out of range */
/*size of n in bits*/
if (index >= sizeof(n) * CHAR_BIT)
{
return (-1);
}

/* Create a mask with a '1' at the specified index */
/*bitwise AND operation between n and mask*/
if (n & (1UL << index))
{
return (1);
}
else
return (0);
}

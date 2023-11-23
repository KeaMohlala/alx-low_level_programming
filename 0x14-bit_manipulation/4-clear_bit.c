#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
* clear_bit - set value of bit to 0 at a given index)
* @n: pointer to input value
* @index: index of bit to be cleared
* Return: 1 for success, -1 for error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * CHAR_BIT)
{
return (-1);
}
/* Clear the bit at the specified index */
*n &= (~(1UL << index));
return (1);
}

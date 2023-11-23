#include "main.h"
#include <stdio.h>
#include <limits.h>


/**
* set_bit - sets value of a bit to 1 at a given index
* @n: pointer to input number
* @index: index of the bit to set
* Return: 1 if it works and -1 if error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
/* Check if index is out of range */
if (index >= sizeof(*n) * CHAR_BIT)
{
return (-1);
}
/* Set the bit at the specified index */
*n |= (1UL << index);
return (1);
}

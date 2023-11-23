#include "main.h"
#include <stdio.h>

/**
* print_binary - prints binary representation of a number
* @n: integer number to be printed
*/

void print_binary(unsigned long int n)
{
unsigned long int i;
int start_printing = 0;

for (i = 1UL << 63; i > 0; i >>= 1)
{
if (n & i)
{
start_printing = 1;
}
if (start_printing)
{
if (n & i)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
/*If n is zero, we should still print a single '0'*/
if (!start_printing)
{
_putchar('0');
}
}

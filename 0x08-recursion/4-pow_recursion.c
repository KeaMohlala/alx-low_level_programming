#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: base value
 * @y: power value
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, (y - 1)));
}
else
return (-1);
}

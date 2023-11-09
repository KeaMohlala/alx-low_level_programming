#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - funtion that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list ptr;

va_start(ptr, n);

if (n == 0)
return (0);

else
{
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers followed by a newline
* @separator: string to print inbetween numbers
* @n: number of integers passed to functions
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;

va_start(ptr, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
}

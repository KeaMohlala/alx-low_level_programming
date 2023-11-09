#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - function that prints strings
*@n: number of strings passed to the argument
*@separator: string to be printed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *arg_string;
va_list ptr;

va_start(ptr, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
/*assign pointer to string in argument to arg_string pointer*/
/*this is to check if the string is empty*/
arg_string = va_arg(ptr, char*);
if (arg_string != NULL)
{
printf("%s", arg_string);
if (i != (n - 1))
{
printf("%s", separator);
}
}
else
{
printf("(nil)");
break;
}
}
printf("\n");
va_end(ptr);
}

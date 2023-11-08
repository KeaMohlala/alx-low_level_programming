#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer to string which holds name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

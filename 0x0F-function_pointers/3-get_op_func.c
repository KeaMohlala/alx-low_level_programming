#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
* get_op_func - function that selects correct function
* to perform the operation asked by the user
* @s:operator passed as argument to the program
* Return: pointer to function that corresponds to the operator argument
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}


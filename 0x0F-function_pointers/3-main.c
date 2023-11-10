#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main -point of entry
* @argc: number of arguments on the command line
* @argv: pointer to array of pointers with address values of the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
int calc;
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
int (*operator)(int, int);

if (argc == 3)
{
printf("Error\n");
exit(98);
}

if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
{
printf("Error\n");
exit(100);
}

operator = get_op_func(argv[2]);

if (operator == NULL)
{
printf("Error\n");
exit(99);
}

calc = operator(num1, num2);

printf("%d\n", calc);

return (0);
}


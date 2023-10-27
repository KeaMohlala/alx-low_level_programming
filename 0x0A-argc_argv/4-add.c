#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_digit - checks if character is digit, if not loop stops
 * and next t argument is evaluated
 * @n: array to be searched
 * @count: number of arguments
 * Return: sum of digits or 0 if there is a non-digit
 */

int check_digit(int count, char *n[])
{
int i;
int add = 0;

for (i = 1; i < count; i++)
{
if (isdigit(*n[i]) != 0)
{
add += atoi(n[i]);
/*printf("%d\n", add);*/
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", add);
return (0);
}

/**
 * main -point of entry
 * @argc: number of arguments on the command line
 * @argv: pointer to array of pointers with address values of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc <= 1)
printf("0\n");
else
return (check_digit(argc, argv));
return (0);
}

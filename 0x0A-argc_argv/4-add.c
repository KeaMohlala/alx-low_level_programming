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
unsigned int i, j;
unsigned int add = 0;

for (i = 1; i < (unsigned int) count; i++)
{
for (j = 0; n[i][j] != '\0'; j++)
{
if (isdigit(n[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
add += atoi(n[i]);
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

#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to determine the length of a string
 * Return: length of the string
 * @str: pointer to the 1st character of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * argstostr - concetenates all arguments of the program
 * @ac: number of arguments
 * @av: pointer to an array of pointers with addresses to the arguments
 * Return: pointer to the new string (str)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int str_len = 0, position = 0;

	if (ac == 0 || av == 0)
	return (0);
	/*calculate total length of all arguments*/
	for (i = 0; i < ac; i++)
		str_len += _strlen(av[i]);
	/**
	 * allocate memory for concetenated string
	 * +ac for the '\n'after each argument
	 * + 1 for the null terminator
	 */
	str = (char *)malloc(str_len + ac + 1);
if (str == 0)
return (0);
/*copy the arguments into the new string*/
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[position] = av[i][j];
position++;
}
str[position] = '\n';
position++;
}
str[position] = '\0';
return (str);
}

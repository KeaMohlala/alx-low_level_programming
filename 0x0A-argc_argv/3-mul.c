#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - point of entry
 * @argc: number of arguments on the command line
 * @argv: pointer to array of pointers with address values of the arguments
 * Return:1 if two arguments are not received
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		/**
		 * use atoi to convert the strings to intergers,
		 * else ASCII values of the characters
		 * will be used instead
		 */
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	printf("Error\n");
	return (1);
}

#include "main.h"
#include <stdio.h>

/**
 * main - point of entry
 * @argc: number of arguments on the command line
 * @argv: pointer to array of pointers with address values of the arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

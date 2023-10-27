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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

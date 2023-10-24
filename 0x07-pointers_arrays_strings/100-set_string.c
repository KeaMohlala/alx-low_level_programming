#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer that points to the pointer assigned the adress of s0
 * @to: pointer to s1
 */

void set_string(char **s, char *to)
{
	*s = to;
}

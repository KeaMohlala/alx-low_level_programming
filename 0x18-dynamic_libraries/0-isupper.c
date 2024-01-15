#include "main.h"

/**
 *_isupper - fuction checks if character is upper case
 *Return: 1 for uppercase, 0 if not
 *@c: letter to be checked
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

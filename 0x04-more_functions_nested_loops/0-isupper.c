#include "main.h"

/**
 *_isupper - checks for upper case character
 *Return: 1 if uppercase, 0 if not
 *@c: letter that is being checked
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

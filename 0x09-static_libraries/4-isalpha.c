#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: return 1 if alphabetic and 0 if not
 * @c: chacrater that is checked
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

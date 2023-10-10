#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: - 1 if lower case, 0 if not
 * @c :character that is being checked
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

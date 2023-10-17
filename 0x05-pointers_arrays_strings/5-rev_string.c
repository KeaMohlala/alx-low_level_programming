#include "main.h"

/**
 * rev_string - function to reverse a string
 *@s: pointer to string
 */

void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char ch;

	while (s[length] != '\0')
		length++;

	while (i < length)
	{
		length--;
		ch = s[length];
		s[length] = s[i];
		s[i] = ch;
		i++;
	}
}

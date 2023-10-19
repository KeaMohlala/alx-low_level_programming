#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: pointer to the string
 * Return: string with capitalized words
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		else if ((str[i - 1] == '\n' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '.' ||
			str[i - 1] == ' ' ||
			str[i - 1] == ')' ||
			str[i - 1] == '!' ||
			str[i - 1] == ',' ||
			str[i - 1] == '"' ||
			str[i - 1] == ';' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			str[i - 1] == '(' ||
			str[i - 1] == '?')
			&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
	}
	return (str);
}


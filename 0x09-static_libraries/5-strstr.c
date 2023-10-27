#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: main string to be examined
 * @needle: sub-string to be searched in the string
 * Return: returns pointer to first character of the substring found in the
 * main string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, start;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		start = i;

		while ((haystack[i] == needle[j]) && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[start]);
	}
	return (0);
}

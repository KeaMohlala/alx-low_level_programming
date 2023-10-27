#include "main.h"

int find_palindrome(char *s, int first, int last);
int s_length(char *s);

/**
 * find_palindrome - function to check if string is palindrome
 * @s: pointer to string
 * @first: first index of the string
 * @last: last index of the string
 * Return: 1 if palindrome and 0 if not
 */

int find_palindrome(char *s, int first, int last)
{
if (first >= last)
return (1);

else if (s[first] == s[last])
return (find_palindrome(s, first + 1, last - 1));

else
return (0);
}

/**
 * s_length - find length of the string
 * @s: pointer to string
 * Return: length of string ie number of characters
 */

int s_length(char *s)
{
if (*s == '\0')
return (0);

else
return (1 + s_length(s + 1));
}

/**
 * is_palindrome - calls the find palindrome function
 * @s: pointer to the string
 * Return: results of the find palindrome function
 */

int is_palindrome(char *s)
{
int length = s_length(s);
return (find_palindrome(s, 0, length - 1));
}

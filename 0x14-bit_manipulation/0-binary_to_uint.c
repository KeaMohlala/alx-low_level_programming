#include "main.h"
#include <stdio.h>

/**
* _strlen - fuction to determine length of a string
*Return: length of the string
*@s: pointer to the first character of the string
*/

unsigned int _strlen(const char *s)
{
unsigned int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
* val - to return value of a char
* @c: character input
* Return: int value of character
*/

unsigned int val(char c)
{
if (c >= '0' && c <= '9')
return ((unsigned int)c - '0');
else
return ((unsigned int)c - 'A' + 10);
}

/**
* binary_to_uint - convert binary numbers to unsigned int
* @b: pointer to a string of  binary numbers (0 and 1)
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{

unsigned int length = _strlen(b);
/*Initialize power of base*/
unsigned int power = 1;
/*Initialize result*/
unsigned int num = 0;
/*Base 2 is binary*/
unsigned int base = 2;
int i;

if (b == NULL)
return (0);

for (i = length - 1; i >= 0; i--)
{
/*A digit in input number must be*/
/*less than number's base*/
if (val(b[i]) >= base)
{
return (0);
}
num += (val(b[i]) * power);
power = (power) *(base);
}
return (num);
}


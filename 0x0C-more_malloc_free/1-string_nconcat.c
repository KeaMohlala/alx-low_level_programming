#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - function that concetenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to copy
* Return: pointer to new string at new memory location
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
char *ptr;
unsigned int len_s1 = strlen(s1);
unsigned int len_s2 = strlen(s2);

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

if (n >= len_s2)
ptr = malloc(len_s1 + len_s2 + 1);
else
ptr = malloc(sizeof(s1) + n);
if (ptr == 0)
return (0);


while (s1[i])
{
ptr[i] = s1[i];
i++;
}
while (s2[j] && j < n)
{
ptr[i] = s2[j];
j++;
i++;
}
ptr[i] = '\0';
return (ptr);
}

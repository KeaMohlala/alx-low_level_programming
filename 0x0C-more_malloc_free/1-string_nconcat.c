#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
unsigned int len_s1, len_s2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len_s1 = strlen(s1);
len_s2 = strlen(s2);

if (n >= len_s2)
ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char));
else
ptr = malloc((len_s1 + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);

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


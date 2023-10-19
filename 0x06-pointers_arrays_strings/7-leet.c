#include "main.h"

/**
 * leet - encode string into 1337
 * @p: pointer to the string
 * Return: leet string, letters substituted with numbers
 */

char *leet(char *p)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "430711";

for (i = 0; p[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (p[i] == letters[j])
{
p[i] = numbers[j / 2];
}
}
}
return (p);
}

#include "main.h"

/**
* _strcpy - copies string from source to buffer desination
* @dest: destination pointer
* @src: source pointer
* Return: pointer to the destination
*/

char *_strcpy(char *dest, char *src)
{
char *temp;
int length = 0;

while (src[length] != '\0')
{
length++;
}

temp = dest;
while ((*dest++ = *src++) != '\0')
;
return (temp);
}

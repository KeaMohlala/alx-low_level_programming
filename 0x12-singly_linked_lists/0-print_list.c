#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
list_t *i = NULL;

while (h != NULL)
{
if (h -> str == NULL)
{
i = h;
i -> str = "(nil)";
i -> len = 0;
printf("[%d] %s\n", i -> len, i -> str);
}
else
{
printf("[%d] %s\n", h -> len, h -> str);
}
count++;
h = h -> next;

}
return (count);
}

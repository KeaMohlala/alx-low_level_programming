#include "lists.h"
#include <stdio.h>

/**
* list_len - counts the number of nodes in a linked list
* @h: pointer to traverse the list
* Return: number of nodes in the list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

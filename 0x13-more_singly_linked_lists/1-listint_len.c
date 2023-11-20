#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns the number of nodes in the list
* @h: pointer to traverse the list
* Return: number of nodes in the list
*/

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}

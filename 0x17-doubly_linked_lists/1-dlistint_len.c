#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - function that returns number of elements in a node
* @h: pointer to head of list
* Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

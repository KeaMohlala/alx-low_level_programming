#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node of a doubly link list
* @head: pointer to head of list
* @index: index of node starting at 0
* Return: pointer to nth node of the list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp = head;

for (i = 0; i < index; i++)
{
if (temp == NULL)
{
return (NULL);
}
temp = temp->next;
}
return (temp);
}

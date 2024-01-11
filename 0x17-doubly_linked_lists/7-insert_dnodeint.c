#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at index
* @h: pointer to head pointer
* @idx: list index to add new node
* @n: int data to create list
* Return: pointer to new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h;
dlistint_t *temp2 = NULL, *new_node = NULL;
unsigned int i;

if (h == NULL)
return (NULL);
if (idx == 0)
{
new_node = add_dnodeint(&new_node, n);
new_node->next = *h;
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
else
{
new_node = add_dnodeint_end(&new_node, n);
if (new_node == NULL)
return (NULL);
}
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
if (temp->next == NULL)
{
temp->next = new_node;
new_node->prev = temp;
}
else
{
temp2 = temp->next;
temp->next = new_node;
temp2->prev = new_node;
new_node->next = temp2;
new_node->prev = temp;
}
return (new_node);
}

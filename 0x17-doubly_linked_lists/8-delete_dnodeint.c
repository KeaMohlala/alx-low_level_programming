#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index from doubly link list
* @head: pointer to the head pointer
* @index: position of node to be deleted
* Return: 1 if successful, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head, *temp2 = *head;
unsigned int i;

if (*head == NULL)
return (-1);
else if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
temp = NULL;
return (1);
}
else
{
for (i = 0; i < index; i++)
{
if (temp == NULL)
return (-1);
temp = temp->next;
}
if (temp->next == NULL)
{
temp2 = temp->prev;
temp2->next = NULL;
free(temp);
temp = NULL;
return (1);
}
else
{
temp2 = temp->prev;
temp2->next = temp->next;
temp->next->prev = temp2;
free(temp);
temp = NULL;
}
}
return (1);
}

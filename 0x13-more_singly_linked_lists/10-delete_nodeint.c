#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - function deletes node at a certain position of
* the list
* @head: pointer to the head pointer (points to first node in the list)
* @index: index of the node that should be deleted
* Return: 1 if succeeded and -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *previous = *head;
listint_t *delete = *head;
unsigned int i;

if (*head == NULL)
return (-1);
else if (index == 0)
{
*head = (delete)->next;
free(delete);
delete = NULL;
return (1);
}
else
{
for (i = 0; i < index; i++)
{
if (previous->next == NULL)
{
return (-1);
}
previous = delete;
delete = delete->next;
}
previous->next = delete->next;
free(delete);
delete = NULL;
}
return (1);
}


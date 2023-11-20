#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_nodeint_at_index - function returns nth node of a linked list
* @head: pointer to the first node
* @index: index of the node starting at 0
* Return: nth node of the list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp = head;


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

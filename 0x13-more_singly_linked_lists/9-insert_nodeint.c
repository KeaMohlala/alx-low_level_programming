#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - function to insert new node at a given position
* @head: pointer to the head pointer (pointer to the firts node of the list)
* @idx: index of list where new node should be added
* @n: integer data to add to the new node
* Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *ptr = *head;
unsigned int i;

for (i = 0; i < idx; i++)
{
if (ptr == NULL)
return (NULL);

if (i == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = ptr->next;
ptr->next = new_node;
return (new_node);
}

ptr = ptr->next;
}

return (NULL);
}


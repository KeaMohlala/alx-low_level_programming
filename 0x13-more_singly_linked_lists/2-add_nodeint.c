#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - add node to the beginning of the list
* @head: pointer to the head pointer(pointer to beginning of the list)
* @n: integer data to add to the list
* Return: pointer to the new_node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

new_node->next = *head;
*head = new_node;
return (new_node);
}

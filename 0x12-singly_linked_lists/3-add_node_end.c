#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds new node at the end of the list
* @head: pointer to head pointer (i.e. pointer to first node)
* @str: pointer to the string
* Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *new_node;

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_node;
}

return (new_node);
}

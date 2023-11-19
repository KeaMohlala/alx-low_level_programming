#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - add node to the beginning of the list
* @head: pointer to head pointer(pointer to first node)
* @str: pointer to the string
* Return: pointer to head (new node added)
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;

ptr = (list_t *)malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
ptr->str = strdup(str);
ptr->len = strlen(str);
ptr->next = NULL;

ptr->next = *head;
*head = ptr;
return (*head);
}

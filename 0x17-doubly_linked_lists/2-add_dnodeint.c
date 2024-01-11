#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - add node at beginning of doubly linked list
* @head: pointer to head pointer
* @n: integer data
* Return: pointer to new head of the list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->next = NULL;
temp->n = n;

temp->next = *head;
if (*head != NULL)
(*head)->prev = temp;
*head = temp;
return (*head);
}

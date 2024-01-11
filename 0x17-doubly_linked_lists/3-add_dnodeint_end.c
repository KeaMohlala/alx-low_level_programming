#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - add new node at end of doubly linked list
* @head: pointer to head pointer of the list
* @n: integer data element
* Return: pointer to new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *temp2;

temp = malloc(sizeof(dlistint_t));
temp->next = NULL;
temp->n = n;

if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
}
else
{
temp2 = *head;
while (temp2->next != NULL)
temp2 = temp2->next;
temp2->next = temp;
temp->prev = temp2;
}
return (temp);
}

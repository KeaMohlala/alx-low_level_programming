#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - frees doubly linked list
* @head: pointer to head of the list
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}

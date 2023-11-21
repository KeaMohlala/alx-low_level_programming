#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint2 - frees a linked list and sets head pointer to NULL
* @head: pointer to head pointer (pointer to first node)
*/

void free_listint2(listint_t **head)
{
listint_t *ptr;

if (*head == NULL)
return;

ptr = *head;

while (ptr != NULL)
{
ptr = ptr->next;
free(*head);
*head = ptr;
}
}

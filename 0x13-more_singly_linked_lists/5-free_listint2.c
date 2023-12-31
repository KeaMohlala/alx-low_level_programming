#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint2 - frees a linked list and sets head pointer to NULL
* @head: pointer to head pointer (pointer to first node)
*/

void free_listint2(listint_t **head)
{
listint_t *next;

if (head == NULL)
return;


while (*head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
head = NULL;
}

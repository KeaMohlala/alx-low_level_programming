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
listint_t *next;

ptr = *head;

while (ptr != NULL)
{
next = ptr->next;
free(ptr);
ptr = next;
}
if (*head != NULL)
*head = NULL;
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - frees a listint_t list
* @head: pointer to the head of the list
*/

void free_listint(listint_t *head)
{
listint_t *ptr;
listint_t *next;

ptr = head;

while (ptr != NULL)
{
next = ptr->next;
free(ptr);
ptr = next;
}
}

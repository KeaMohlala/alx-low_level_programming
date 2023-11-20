#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_list - function that frees memory assigned to list_t
* @head: pointer to the first node
*/

void free_list(list_t *head)
{
list_t *ptr;
list_t *next;

ptr = head;

while (ptr != NULL)
{
next = ptr->next;
free(ptr->str);
free(ptr);
ptr = next;
}
}

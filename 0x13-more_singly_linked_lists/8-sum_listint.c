#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - calculates the sum of all int data of a linked list
* @head: pointer to first node of the list
* Return: sum of int data (n);
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = head;

if (head == NULL)
return (0);

while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}

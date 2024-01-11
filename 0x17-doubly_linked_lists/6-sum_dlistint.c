#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - returns sum of all data of a d-linked list
* @head: pointer to head of the list
* Return: sum of int data
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

if (head == NULL)
return (0);

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

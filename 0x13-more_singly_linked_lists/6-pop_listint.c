#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to to the head pointer (pointer to beginning of the list)
 * Return: head nodes data (head->n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;

	return (n);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_liastint2 - frees a list and sets its head
 * to NULL
 * @temp: a temporary pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

	}
	*head = NULL;
}

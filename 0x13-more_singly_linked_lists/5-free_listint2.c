#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 - frees a list and sets its head
 * to NULL
 * @head: the first node in the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;

	}
	*head = NULL;
}

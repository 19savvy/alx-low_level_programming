#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a linked list
 * @head: first node in a linked list
 * Return: A pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

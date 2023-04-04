#include "lists.h"
#include <stdlib.h>
/**
 * sum_lisint -  A function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: A pointer to listint_t structure.
 * Return: The sum of all the data (n) of a listint_t linked list
 * or 0 if it fails
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}

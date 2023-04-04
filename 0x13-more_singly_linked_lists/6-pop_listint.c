#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint - a function that deletes a head node
 * @head: first node in the list
 * Return: the data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);

}

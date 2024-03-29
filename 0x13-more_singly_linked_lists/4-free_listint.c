#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - a function that frees a list
 * @head: first node in the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

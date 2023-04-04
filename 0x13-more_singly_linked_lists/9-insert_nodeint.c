#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp, *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		newNode->n = n;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}

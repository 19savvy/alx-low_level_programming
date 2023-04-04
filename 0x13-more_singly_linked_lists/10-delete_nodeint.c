#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - a function that deletes a node at
 * specified index
 * @head: the first node in the list
 * @index: the position of the node
 * Return: 1 if successful and 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *newNode;

	if (*head == NULL)
		return (0);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

	}
	else
	{
	while (i < index)
	{
		{
			temp = temp->next;
			if (temp == NULL)
				return (0);
			i++;
		}
		newNode = temp;
		newNode = newNode->next;
		free(newNode);
	}
	}
	return (1);
}

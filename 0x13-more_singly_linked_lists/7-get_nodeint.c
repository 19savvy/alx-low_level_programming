#include "list.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns a node of a
 * given index
 * @index: the index of the node to be returned
 * Return: the node of the required index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL && count < index)
	{
		tempt = temp->next;
		count++;
	}
	if (count == index && temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}

}

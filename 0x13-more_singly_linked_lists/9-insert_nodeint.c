#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - A function that inserts node at
 * a specified index
 * @head: A pointer to listint_t structure
 * @n: An integer data for the new node
 * @idx: the index the new list should be in
 * Return: The address to new node at specified index, or NULL if it's
 * unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	int i;
	if (head == NULL)
	{
		return (NULL);
	}
	newNode = (*head)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		newNode->n = n;
		newNode->next = NULL;
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
	for (;i < idx; i++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->n = n;
	temp->next = newNode;
	return (0);

}

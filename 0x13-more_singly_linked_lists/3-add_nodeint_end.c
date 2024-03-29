#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - a function that adds a new node to the end
 * of a list
 * @head: first node of the list
 * @n: the data
 * Return: the address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);

}

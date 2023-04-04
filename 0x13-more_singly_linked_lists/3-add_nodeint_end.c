#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - a function that adds a new node to the end
 * of a list
 * @newNode: the new node to be added
 * Return: the address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (*listint_t)malloc(sizeof(listint_t);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return;
	}
	lisint_t *temp = *head;

	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = newNode;
	return (temp);

}

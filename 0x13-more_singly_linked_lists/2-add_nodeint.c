#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - a function that adds a new node to a
 * list
 * @newNode: the new node to be added to the beginning
 * of the list
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode = (head*)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	*head = NewNode;
	return (*head);
}

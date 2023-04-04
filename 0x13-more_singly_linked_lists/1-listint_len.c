#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * listint_len - a function that returns the number of
 * elements in a linked list
 * @h: the data
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfElements = 0;
	listint_t *currentNode = (listint_t *)h;

	while (currentNode != NULL)
	{
		numberOfElements++;
		currentNode = currentNode->next;
	}
	return (numberOfElements);
}

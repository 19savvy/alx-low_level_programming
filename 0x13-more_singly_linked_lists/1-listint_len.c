#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * listint_len - a function that returns the number of
 * elements in a linked list
 * @numberOfElements: the number of elements in the
 * list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfElements;
	listint_t *currentNode = h;

	while (currentNode != NULL)
	{
		numberOfElements++;
		currentNode = h->next;
	}
	return (numberOfElements);
}

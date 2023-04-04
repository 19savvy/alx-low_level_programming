#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint - a function that prints the elements
 * of a list
 * @numberOfNodes: the number of nodes in the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
	
}

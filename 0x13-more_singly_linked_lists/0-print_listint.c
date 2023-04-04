#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint - a function that prints the elements
 * of a list
 * @h: the data
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}

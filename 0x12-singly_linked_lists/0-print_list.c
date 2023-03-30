#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints contents of a linked list
 * @h: a pointer to the head of the list
 * Return: number of nodes as size_t
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u]", h->len);
		if (h == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}

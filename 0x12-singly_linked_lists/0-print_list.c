#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}

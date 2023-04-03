#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

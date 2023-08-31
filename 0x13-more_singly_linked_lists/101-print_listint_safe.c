#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: Pointer to the first node
 *Return: Number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list[10000];
	size_t nodes = 0;

	while (head)
	{
		if (nodes >= sizeof(list) / sizeof(list[0]))
		{
			fprintf(stderr, "List is too large.\n");
			exit(98);
		}

		if (contains_node(list, nodes, head))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (nodes);
		}

		list[nodes++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (nodes);
}

/**
 * contains_node - checks if a node exists in an array of nodes
 * @list: Array of pointers to listint_t nodes
 * @size: Size of the array
 * @node: Pointer to the node to check
 * Return: 1 if the node exists in the array, 0 otherwise
 */
int contains_node(const listint_t **list, size_t size, const listint_t *node)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (list[i] == node)
			return (1);
	}
	return (0);
}


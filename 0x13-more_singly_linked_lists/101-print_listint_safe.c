#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers and detects if there
 * is a loop in the list
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *temp;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		temp = current;
		current = current->next;

		if (temp < current)
			continue;

		if (temp > current)
		{
			current = head;
			while (temp != NULL)
			{
				printf("[%p] %d\n", (void *)temp, temp->n);
				count++;
				temp = temp->next;

				if (temp == head)
					return (count);
			}
			exit(98);
		}
	}
	return (count);
}


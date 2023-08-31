#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t **reallocateArray(listint_t **arr, size_t size, listint_t *newNode);

/**
 * free_listint_safe - frees a linked list.
 * @head: Address of pointer to the first node
 *
 * Return: Number of nodes in the list.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t **arr = NULL;
	listint_t *nextNode;

	if (!head || !(*head))
		return (count);

	while (*head)
	{
		if (containsNode(arr, count, *head))
		{
			*head = NULL;
			free(arr);
			return (count);
		}

		count++;
		arr = reallocateArray(arr, count, *head);
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
	}

	free(arr);
	return (count);
}

/**
 * reallocateArray - reallocates memory for an array of pointers to the
 *                  nodes in a linked list
 *
 * @arr: Initial array to append
 * @size: Size of the new array (always one more than the old array)
 * @newNode: New node to add to the array
 *
 * Return: Pointer to the new array
 */

listint_t **reallocateArray(listint_t **arr, size_t size, listint_t *newNode)
{
	listint_t **newArr;
	size_t i;

	newArr = malloc(size * sizeof(listint_t *));
	if (!newArr)
	{
		free(arr);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newArr[i] = arr[i];

	newArr[i] = newNode;
	free(arr);

	return (newArr);
}

/**
 * containsNode - checks if a node exists in an array of nodes
 * @arr: Array of pointers to listint_t nodes
 * @size: Size of the array
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node exists in the array, 0 otherwise
 */
int containsNode(listint_t **arr, size_t size, listint_t *node)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == node)
			return (1);
	}

	return (0);
}


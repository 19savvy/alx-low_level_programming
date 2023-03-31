#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * stringLength - a function that return the number of strings
 * @c: pointer to the string that adds a node
 * Return: return 1 on success
 */
int stringLength(const char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = stringLength(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}

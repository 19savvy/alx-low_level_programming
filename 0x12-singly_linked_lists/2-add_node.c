#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * stringLength - a function that return the number of strings
 * @head: pointer to a list_t pointer that points to the head struct
 * @c: pointer to a string
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
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
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = stringLength(str);
	node->next = *head;
	*head = node;
	return (node);
}

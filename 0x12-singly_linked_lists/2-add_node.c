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
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to the string that adds a node
 * Return: pointer to new head of list, NULL on failure
 */
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

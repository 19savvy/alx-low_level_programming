#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
int _strlen(int)
{
}
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;
	*head = add;
	return (node);
}

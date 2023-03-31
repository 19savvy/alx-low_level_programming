#include "lists.h"
#include <stdlib.h>
#include <strings.h>
/**
 * free_list - a function that frees a list
 * @head: A pointer to the first node of the list to free.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *nextList;

	while (temp)
	{
		nextList = temp->next;
		free(temp->str);
		free(temp);
		temp = nextList;
	}

}

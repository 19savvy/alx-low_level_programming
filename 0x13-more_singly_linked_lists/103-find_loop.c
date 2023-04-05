#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list.
 *
 * @h: A pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t nodes = 0;
    listint_t *temp;

    while (*h != NULL)
    {
        nodes++;

        if ((*h)->next >= *h)
        {
            printf("Freeing the list: %d\n", (*h)->n);
            free(*h);
            *h = NULL;
            break;
        }

        temp = (*h)->next;
        free(*h);
        *h = temp;
    }

    *h = NULL;

    return (nodes);
}


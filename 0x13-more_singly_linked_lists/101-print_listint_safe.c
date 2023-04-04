#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints the elements in a list
 *                      and detects if there is a loop in the list.
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;
    const listint_t *current = head;
    const listint_t *visited[1024] = {NULL};  // Hash table to keep track of visited nodes

    while (current != NULL)
    {
        // Check if the current node has already been visited
        for (size_t i = 0; i < nodes; i++)
        {
            if (visited[i] == current)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                exit(98);
            }
        }

        // If the current node has not been visited, add it to the hash table
        visited[nodes] = current;

        // Print the current node and move to the next node
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        nodes++;
    }

    return (nodes);
}


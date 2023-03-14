#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *new_str, *top;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	top = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = top;
	new_str = malloc(sizeof(char) * (len + 1));
	top = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (top);
	}
	else
		return (NULL);
}

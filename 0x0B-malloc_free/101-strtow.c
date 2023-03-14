#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 *         or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	if (count == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;

		for (j = i, len = 0; str[j] && str[j] != ' '; j++, len++)
			;

		array[k] = malloc(sizeof(char) * (len + 1));
		if (array[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}

		for (j = i, len = 0; str[j] && str[j] != ' '; j++, len++)
			array[k][len] = str[j];
		array[k][len] = '\0';
		k++;
		i = j;
	}

	array[k] = NULL;
	return (array);
}


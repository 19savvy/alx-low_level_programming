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
	int i, j, k, len, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* count the number of words in str */
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
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

		/* find the length of the current word */
		for (j = i, len = 0; str[j] && str[j] != ' '; j++, len++)
			;

		/* allocate memory for the word */
		array[k] = malloc(sizeof(char) * (len + 1));
		if (array[k] == NULL)
		{
			/* free previously allocated memory */
			for (j = 0; j < k; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}

		/* copy the current word into the array */
		for (j = i, len = 0; str[j] && str[j] != ' '; j++, len++)
			array[k][len] = str[j];
		array[k][len] = '\0';
		k++;
		i = j; /* skip the current word */
	}

	array[k] = NULL; /* mark the end of the array */
	return (array);
}


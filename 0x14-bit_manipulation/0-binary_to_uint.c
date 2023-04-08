#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: pointer to a string of 0 and 1
 * Return: the converted number if successful or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv, i;
	char *fail;

	conv = strtoul(b, &fail, 2);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0' || b == NULL)
		{
			return (0);
		}
	}
	return (conv);
}

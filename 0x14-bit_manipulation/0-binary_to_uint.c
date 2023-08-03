#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 *
 * This function takes a binary string representation and converts it to an
 * unsigned int. The binary string must only contain '0' and '1' characters,
 * and it must not be `NULL`. If the binary string is not a valid binary
 * representation or is `NULL`, the function returns 0 to show an error or
 * invalid input.
 *
 * @b: The binary string to be converted.
 *
 * Return: The unsigned integer equivalent of the binary string, or 0 if the
 *         input is invalid.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, convert;
	char *invalid;

	convert = strtoul(b, &invalid, 2);

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}
	return (convert);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * set_bit - Set a bit to 1 at the given index.
 *
 * This function sets the bit at the specified index to 1
 *
 * @n: Pointer to the unsigned long integer where the bit will be set.
 * @index: The index of the bit to be set.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = 1UL << index;

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n |= position;
	return (1);
}

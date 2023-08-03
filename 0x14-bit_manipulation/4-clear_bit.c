#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * clear_bit - Set a bit to 0 at the specified index.
 *
 * This function sets the bit at the specified index to 0
 *
 * @n: Pointer to the unsigned long integer where the bit will be cleared.
 * @index: The index of the bit to be cleared
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = ~(1UL << index);

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n &= position;
	return (1);
}

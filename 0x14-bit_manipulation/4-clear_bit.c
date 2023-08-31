#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Number to be worked on
 * @index: Index to set the bit
 *
 * Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	max = ~(1UL << index);
	*n &= max;

	return (1);
}

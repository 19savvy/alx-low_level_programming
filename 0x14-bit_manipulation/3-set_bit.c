#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Number to be worked on
 * @index: Index to set the bit
 * Return: 1 on success and -1 on failur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	max = 1UL;
	max <<= index;
	*n |= max;

	return (1);
}

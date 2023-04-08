#include "main.h"
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * clear_bit - a function that sets the value of a bit to 0
 * at a given index.
 * @n: The index to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = ~(1UL << index);

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n = *n & position;
	return (1);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: The index to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = 1UL << index;

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n = *n | position;
	return (1);

}

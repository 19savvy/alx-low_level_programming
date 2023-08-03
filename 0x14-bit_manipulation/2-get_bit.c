#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a specified index.
 *
 * This function returns the value of the bit at a given index
 * from an unsigned long integer number.
 *
 * @n: The number from which the bit value is to be retrieved.
 * @index: The index of the bit to get, starting from 0 (LSB).
 *
 * Return: The value of the bit at the specified index (0 or 1),
 *         or -1 if an error occurred (index is out of range).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitValue;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	bitValue = (n >> index) & 1;
	return (bitValue);
}

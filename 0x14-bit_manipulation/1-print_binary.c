#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number.
 *
 * This function prints the binary representation of a given
 * unsigned long integer number in standard output.
 *
 * @n: The number to be printed in binary format.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * CHAR_BIT - 1);
	int leading_zero = 0;

	if (n == 0)
	{
		putchar('0');
	}
	while (mask != 0UL)
	{
		if ((mask & n) != 0UL)
		{
			leading_zero = 1;
			putchar('1');
		}
		else if (leading_zero == 1)
		{
			putchar('0');
		}
		mask = mask >> 1;
	}
	putchar('\n');
}

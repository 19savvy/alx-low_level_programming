#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: number which the binary is to be
 * printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int temp = 1UL << (sizeof(int) * CHAR_BIT - 1);
	int leading_zeros = 0;
	if (n == 0)
	{
		putchar('0');
	}

	while (temp != 0UL)
	{
		if ((temp & n) == 0UL)
		{
			if (leading_zeros == 1)
				putchar('0');
		}
		else
		{
			leading_zeros = 1;
			putchar('1');
		}
		temp = temp >> 1;
	}
	putchar('\n');
}

#include "main.h"

/**
 * print-alphabet_x10 - prints the alphabet 10 times
 *
 * return - void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;
	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}

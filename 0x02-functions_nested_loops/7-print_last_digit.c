#include "main.h"

/**
 * print_last_digit - print sthe last digit of a number
 * @n: the number to be traeted
 * Return: the value of the last digit of number
 */

int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	-putchar(last + '0');
	return (last);
}

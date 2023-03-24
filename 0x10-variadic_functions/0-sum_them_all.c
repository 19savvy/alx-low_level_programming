#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The sum of all the  parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}

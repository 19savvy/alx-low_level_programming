#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: Input string to be printed between numbers.
 * @n: number of parameters
 * @...: The other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *string;

	va_start(arg, n);
	for (; i < n; i++)
	{
		string = va_arg(arg, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}

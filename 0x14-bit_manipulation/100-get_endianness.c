#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - a function that checks the endianness.
 * of a variable
 * Return: the byte
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c);
}

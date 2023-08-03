#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - Check the endianness of the system.
 *
 * This function determines the endianness of the underlying system
 * by examining the memory representation of an integer variable.
 *
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c);
}

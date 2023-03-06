#include "main.h"

/**
 *  _memset - the function that fills memory with constant bytes
 * @s: pointer to the location to be filled
 * @b: byte to fill the location with
 * @n: number of bytes to be filled
 * @return: returns the location to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

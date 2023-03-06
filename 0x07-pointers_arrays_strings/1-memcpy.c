#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * dest: location to fill
 * @src: location to be copied
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
	}
	return (start);
}

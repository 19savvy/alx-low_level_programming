#include "main.h"

/**
 * _memcpy - function that copies memory 
 * dest: memory location to fill
 * @src: memory location to be copied
 * @n: number of bytes to copy
 * Return: returns pointer to location copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}

#include "main.h"

/**
 * _memcpy - function that copies memory to another memory
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
		src++;
	}
	return (start);
}

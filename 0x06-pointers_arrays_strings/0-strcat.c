#include "main.h"

/**
 * _strcat - concatenate one string to another
 * @dest: the destination
 * @src: the source
 * return: returns the resulting string
 */

char *_strcat(char *dest, char *src);
{
	char *tmp = *dest;

	while(*dest)
	{
		dest++;
	}

	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (tmp);

}

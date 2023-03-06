#include "main.h"

/* _memset - defines the function
 * @s: pointer to the location to be filled
 * @b: byte to fill the location with
 * @n: number of bytes to be filled
 * @start: points to the same location as s
 * @return: beginnig of the location to be filled
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

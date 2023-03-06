#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = accept;

	while (*haystack)
	{
		while (*needle)
		{
			if (*needle == *haystack)
				return (haystack);
			needle++;
		}

		needle = haystack;
		haystack++;
	}
	if (*neddle == *haystack)
		return (haystack);
	return (NULL);
}

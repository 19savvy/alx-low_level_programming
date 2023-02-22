#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 *
 * return: returns 1 if it is lowercase and 0 if its not
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

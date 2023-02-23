#include "main.h"

/**
 * _abs - checks the code
 * Return: returns absolute number or the number
 * @c: the number to be checked
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

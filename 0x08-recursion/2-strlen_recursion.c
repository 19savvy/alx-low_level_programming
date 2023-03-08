#include "main.h"

int _strlen_recursion(char *s)
{
	int count;
	count = 0;

	if (*s)
	{
		count++;
		_strlen_recursion(s);
	}
	return count;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
*main - Entry point
*
*Return: 0
*/
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar ('\n');
	return (0);
}


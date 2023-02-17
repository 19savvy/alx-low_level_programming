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

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
		letter++;
	}
	return (0);
}

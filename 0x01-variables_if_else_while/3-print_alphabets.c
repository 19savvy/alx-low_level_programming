#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}

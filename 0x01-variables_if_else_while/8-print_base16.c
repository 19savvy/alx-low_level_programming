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
	char numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}

	char letters;

	letters = 'a';
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar ('\n');
	return (0);
}

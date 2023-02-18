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
	char letters;

	numbers = '0';
	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}

	letters = 'a';
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar ('\n');
	return (0);
}

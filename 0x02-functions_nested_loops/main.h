#ifndef ALPHA
#define ALPHA
#include <stdio.h>
#include <stdio.h>

/**
 * print_message - print a message
 *
 * print_alphabet - prints alphabets
 */
void print_message(void)
{
	printf("_putchar\n");
}

/**
 * print_alphabet - print aphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

		printf("%c", letter);
		letter++;

	}
	printf("\n");

}
#endif

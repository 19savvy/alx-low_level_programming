#ifndef ALPHA
#define ALPHA
#include <stdio.h>

void print_message(void)
{
	printf("_putchar\n");
}

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

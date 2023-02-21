#include <stdio.h>

void print_message(void)
{
	printf("_putchar\n");
	return;
}

void print_alphabet()
{
	char min = 'a';
	while (min <= 'a')
	{
		printf("%c", min);
		min++;
	}

	return;
}

#include <stdio.h>

void print_message(void)
{
	printf("_putchar\n");
	return;
}

void print_alphabet()
{
	char min;
	for (min = 'a'; min <= 'z'; min++)
	{
		printf("%c",min);
	}
	printf("\n");
	return;
}

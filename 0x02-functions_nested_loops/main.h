#include <stdio.h>

void print_message(void)
{
	printf("_putchar\n");
	return;
}

void print_alphabet(void)
{
	char min = 'a';
	while (min <= 'z')
	{
		printf("%c", min);
		min++;
		return;
	}

}

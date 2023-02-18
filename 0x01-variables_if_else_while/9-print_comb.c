#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * *main - Entry point
 * *
 * *Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}

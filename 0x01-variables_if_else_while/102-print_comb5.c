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
	int num1, num2, a, b, c, d;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			a = num1 / 10;
			b = num1 % 10;
			c = num2 / 10;
			d = num2 % 10;
			putchar('0' + a);
			putcahr('0' + b);
			putcahr(' ');
			putcahr('0' + c);
			putcahr('0' + d);
			if (num1 != 98 || num2 != 99)
			{
				putcahr(',');
				putchar(' ');
			}
		}
	}
	putcahr('\n');
	return (0);
}


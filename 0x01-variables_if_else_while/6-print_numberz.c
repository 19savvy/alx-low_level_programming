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
	int numberz;
	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz + '0');
	}
	return(0);
}

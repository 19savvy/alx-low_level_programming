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
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf('\n');
	return(0);
}

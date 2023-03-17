#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int num1, num2, answer;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (num1 != i || num2 != i)
		{
			printf("Error\n");
			exit(98);
		}
		else
		{
			answer = num1 * num2;
			printf("%d\n", answer);
		}
	}

	return (0);
}


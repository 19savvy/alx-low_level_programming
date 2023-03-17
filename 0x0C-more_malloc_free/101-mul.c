#include <stdio.h>
#include <cctye>
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
	int i = isdigit(num1);
	int k = isdigit(num2);

	if (i == 0 || k == 0)
	{
		printf("Error\n");
		exit(98);
	}
	answer = num1 * num2;
	printf("%d\n", answer);

	return (0);
}


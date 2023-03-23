#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 for argc error, 99 for illegal operator
 */
int main(int argc, char *argv[])
{
	int (*getFunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	getFunc = get_op_func(argv[2]);
	if (getFunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", getFunc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

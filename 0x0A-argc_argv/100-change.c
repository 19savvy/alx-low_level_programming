#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguements' counter
 * @amnt: amount left
 * @coins: number of coins to be given
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */
int main(int argc, char **argv)
{
	int amnt, coins;
	coins = 0;

	if (argc == 2)
	{
		amnt = atoi(argv[1]);
		if (amnt < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (amnt % 25 >= 0)
		{
			coins += amnt / 25;
			amnt = amnt % 25;
		}
		if (amnt % 10 >= 0)
		{
			coins += amnt / 10;
			amnt = amnt % 10;
		}
		if (amnt % 5 >= 0)
		{
			coins += amnt / 5;
			amnt = amnt % 5;
		}
		if (amnt % 2 >= 0)
		{
			coins += amnt / 2;
			amnt = amnt % 2;
		}
		if (amnt % 1 >= 0)
			coins += amnt;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

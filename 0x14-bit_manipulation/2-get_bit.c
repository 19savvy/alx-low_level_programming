#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - a function that returns the value of a bit
 * at a given index.
 * @n: the number of which it's index is to be returned
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int temp = n;
	int arr[65];

	while (temp != 0)
	{
		arr[i] = temp % 2;
		temp /= 2;
		i++;
	}
	if (index < i)
	{
		return (arr[index]);
	}
	else
	{
		return (-1);
	}

}

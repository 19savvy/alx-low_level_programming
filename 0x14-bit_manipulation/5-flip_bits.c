#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * flip_bits -  a function that returns the number of bits you would 
 * need to flip to get from one number to another.
 * @n: number
 * @m: other number
 * @Return: the number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int XOR = n ^ m, temp = 1;

	while (XOR)
	{
		count += XOR & temp;
		XOR >>= 1;
	}
	return (count);
}

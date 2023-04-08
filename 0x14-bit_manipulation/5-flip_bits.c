#include <stddef.h>
#include <stdlib.h>
/**
 * flip_bits - A function that returns the number of bits needed to flip
 * @n: A number
 * @m: The number to set other equal
 * Return: The number of fliped bits
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

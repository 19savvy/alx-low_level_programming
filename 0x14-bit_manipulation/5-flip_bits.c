#include "main.h"
/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: First number
 * @m: Second number
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int xor = (n ^ m), max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flip++;
		max <<= 1;
	}
	return (flip);
}

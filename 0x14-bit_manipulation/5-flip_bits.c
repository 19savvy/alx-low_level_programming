#include <stddef.h>
#include <stdlib.h>
/**
 * flip_bits - Calculate the number of flipped bits to transform 'n' into 'm'.
 *
 * @n: Source number.
 * @m: Target number to transform into.
 * Return: Number of flipped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int count = 0;

	while (XOR != 0)
	{
		XOR &= (XOR - 1);
		count++;
	}

	return (count);
}

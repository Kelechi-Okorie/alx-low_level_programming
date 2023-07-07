#include "main.h"

/**
 * flip_bits - returns number of bits to flip to change
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Description: returns number of bits to flip to change
 * from one number to another
 * Return: number of bits to flip;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count;
	unsigned long int p;
	unsigned long int xor;

	xor = n ^ m;

	for (i = 63, count = 0; i >= 0; i--)
	{
		p = xor >> i;

		if (p & 1)
			count++;
	}

	return (count);
}

#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Description: returns number of bits to flip
 * to go from first number to second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned int count;

	count = 0;
	value = n ^ m;

	while (value != 0)
	{
		if (value & 1)
			count++;

		value = value >> 1;
	}

	return (count);
}

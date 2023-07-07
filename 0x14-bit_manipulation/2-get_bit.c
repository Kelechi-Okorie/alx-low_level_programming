#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: the given number
 * @index: the index to return the value of bit at
 *
 * Description: returns value of bit at a given index
 * Return: value of bit at a given index from the number n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63 || index < 0)
		return (-1);
	return ((n >> index) & 1);
}

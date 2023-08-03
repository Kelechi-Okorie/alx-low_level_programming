#include "main.h"

/**
 * get_endianness - checks the endianness of a computer
 *
 * Description: checks the endianness of a computer
 * Return: 1 on big indian, 0 on little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	c = (char *) &i;

	return (*c);
}

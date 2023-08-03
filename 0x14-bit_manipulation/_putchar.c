#include "main.h"

#include <unistd.h>

/**
 * _putchar - prints a char to stdout
 * @c: the char to print
 *
 * Description: prints a char to stdout
 * Return: always 1
 */
int _putchar(int c)
{
	write(1, &c, 1);
	
	return (1);
}

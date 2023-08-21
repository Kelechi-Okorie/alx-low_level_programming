#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character to print
 *
 * Description: prints prints a character
 * Return: always 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

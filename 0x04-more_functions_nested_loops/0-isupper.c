#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Description: checks if c is an uppercase character
 * Return: 1 is c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

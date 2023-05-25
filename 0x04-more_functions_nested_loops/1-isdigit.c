#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character to check
 *
 * Description: checks if @c is a digit
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

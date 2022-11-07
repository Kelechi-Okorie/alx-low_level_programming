#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is alphabetich character
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 122))
		return (1);
	return (0);
}

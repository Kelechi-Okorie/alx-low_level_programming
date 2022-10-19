#include "main.h"

/**
 * _islower - Checks if the argument is lowercase character
 * @c: The argument to check
 *
 * Return: 1 if @c is lowercase character
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);



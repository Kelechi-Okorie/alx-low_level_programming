#include "main.h"

/**
 * _pow_recursion - calculates a value raised to another value
 * @x: the base
 * @y: the power
 *
 * Description: returns the value of @x raised to the power @y
 * Return: @x raised to power @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

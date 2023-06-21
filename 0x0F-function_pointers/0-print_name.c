#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to print the name
 *
 * Description: prints the name using function @f
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	(*f)(name);
}

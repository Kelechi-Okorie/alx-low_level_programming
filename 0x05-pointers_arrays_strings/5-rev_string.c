#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Description: reverses a string @s
 * Return: void
 */
void rev_string(char *s)
{
	char *sp1, *sp2, tmp;

	for (sp2 = s; *sp2 != '\0'; ++sp2)
		;
	--sp2;
	for (sp1 = s; sp2 > sp1; sp2--, sp1++)
	{
		tmp = *sp1;
		*sp1 = *sp2;
		*sp2 = tmp;
	}
}

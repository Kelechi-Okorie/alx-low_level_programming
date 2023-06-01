#include "main.h"

int is_prev_seperator(char *p);

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Description: capitalizes all words of a string
 * Return: pointer to the string capitalized
 */
char *cap_string(char *s)
{
	char *sp;

	for (sp = s; *sp != '\0'; sp++)
	{
		if ((*sp >= 'a' && *sp <= 'z') && is_prev_seperator(sp))
		{
			*sp = *sp - 32;
		}
	}

	return (s);
}


/**
 * is_prev_seperator - checks is previous char is seperator
 * @p: pointer to current charater
 *
 * Description: checks if previous character to the one
 * passed is a seperator
 * Return: 1 if seperator, 0 otherwise
 */
int is_prev_seperator(char *p)
{
	int i;
	char sep[13];

	sep = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	--p;
	for (i = 0; i < 13; i++)
	{
		if (*p == sep[i])
			return (1);
	}

	return (0);
}

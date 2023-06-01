#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Description: encodes the string @s into 1337
 * Return: pointer to string encoded
 */
char *leet(char *s)
{
	int i;
	char *sp;

	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (sp = s; *sp != '\0'; sp++)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (*sp == s1[i])
			{
				*sp = s2[i];
			}
		}
	}

	return (s);
}

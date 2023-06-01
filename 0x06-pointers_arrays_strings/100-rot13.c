#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Description: encodes a string using rot13
 * Return: pointer to rotated string
 */
char *rot13(char *s)
{
	int i;
	char *sp;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (sp = s; *sp != '\0'; sp++)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (*sp == s1[i])
			{
				*sp = s2[i];
				break;
			}
		}
	}

	return (s);
}

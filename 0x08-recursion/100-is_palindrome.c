#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int i, int n);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Description: checks if the string @s is a palindrome
 * Return: 1 is @s is a palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;

	if (*s == '\0')
		return (1);

	n = _strlen_recursion(s);

	return (palindrome(s, 0, n));
}

/**
 * _strlen_recursion - returns length of string
 * @s: the string to return length of
 *
 * Description: returns length of string @s
 * Return: length of the string @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks for palindrome using recursion
 * @s: string to check
 * @i: index
 * @n: length of the string
 *
 * Description: checks if the string @s is a palindrome
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */
int palindrome(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);

	if (i >= n)
		return (1);

	return (palindrome(s, i + 1, n - 1));
}

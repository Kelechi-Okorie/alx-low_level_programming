int _strlen_recursion(char *s);
int check(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 *
 * Return: 1 is palindrome, 0 therwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to return the length of
 *
 * Return: integer representing length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - checks string to determine if palindrome
 * @s: the string to check
 * @i: the iterator
 * @j: the length of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);

	if (i >= j)
		return (1);

	return (check(s, i + 1, j - 1));
}

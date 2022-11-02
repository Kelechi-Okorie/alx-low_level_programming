/**
 * _strlen_recursion - returns thelength of a string
 * @s: the string to return the length of
 *
 * Return: integer represeting length of a strint
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

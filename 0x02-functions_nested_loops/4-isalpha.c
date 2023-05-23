/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Descrtion: checks if c is alphabetic character
 * Return: always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

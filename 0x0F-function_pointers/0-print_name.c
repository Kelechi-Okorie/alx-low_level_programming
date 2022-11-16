/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to call
 *
 * Return: Always nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if(!name || !f)
		return;
	(*f)(name);
}

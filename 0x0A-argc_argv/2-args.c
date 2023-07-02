#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints all arguments it recieves
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

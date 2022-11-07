#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed in
 * @argv: array of arguments passed in
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}

#include <stdio.h>

/**
 * main - prints its own name
 * @argc: number of arguments passed in
 * @argv: array of arguments passed in
 *
 * Return: true
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - prints number of arguments passed in
 * @argc: number of arguments passed in
 * @argv: array of arguments passed in
 *
 * Return: int
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

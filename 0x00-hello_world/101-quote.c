#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string to the standard error
 * -without using printf or puts
 *
 * Description: prints a string to the standard error
 * -without using printf or puts
 * Return: always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

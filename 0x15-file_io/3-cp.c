#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SIZE 1024

/**
 * main - copies content from one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: copies content from one file to another
 * Return: status code indicating the status of the operation
 */
int main(int argc, char *argv[])
{
	int from, to, n, a, b;
	char buf[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	       exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((n = read(from, buf, SIZE)) > 0)
	{
		if (write(to, buf, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from);
			close(to);
			exit(99);
		}
	}
	a = close(from);
	b = close(to);
	if (a < 0 || b < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", a == 0 ? a : b);
		exit(100);
	}

	return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define SIZE 1024

/**
 * main - copies content of a file a another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: copies the contents of one file to another
 * Return: status codes to indicate status of operation
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, c_from, c_to, n;
	char buf[SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((n = read(fd_from, buf, SIZE)) > 0)
	{
		if (fd_to == -1 || (write(fd_to, buf, n) != n))
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			if (fd_to > 0)
				close(fd_to);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c_from = close(fd_from);
	c_to = close(fd_to);
	if (c_from == -1 || c_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c_from == -1 ? c_from : c_to);
		exit(100);
	}
	return (0);
}

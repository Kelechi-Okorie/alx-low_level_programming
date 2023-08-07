#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the textfile
 * @letters: number of letters to read and print
 *
 * Description: reads a text file and prints it to the
 * POSIX standard output
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num_read, num_write;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	num_read = read(fd, buf, letters);
	if (num_read < 0)
	{
		free(buf);
		return (0);
	}

	num_write = write(STDOUT_FILENO, buf, num_read);

	if (num_write < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (num_write);
}

#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * read_textfile - reads text file and prints contents
 * to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of chars to read from @filename
 *
 * Description: reads @letters number of characters
 * from @filename
 * Return: the actual number of letters it could read
 * and print from @filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t s, t;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
		return (0);

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}

	buf[s] = '\0';
	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	if (t < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (t);
}

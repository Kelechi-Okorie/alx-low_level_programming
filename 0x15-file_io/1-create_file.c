#include "main.h"

#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file and write into it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to file
 *
 * Description: creates a file and writes to it
 * Return: On success 1 is returned
 * 0 is returned on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_write, n;

	num_write = 0;
	n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n] != '\0'; n++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (0);

	if (n > 0)
	{
		num_write = write(fd, text_content, n);
	}

	if (num_write < n)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

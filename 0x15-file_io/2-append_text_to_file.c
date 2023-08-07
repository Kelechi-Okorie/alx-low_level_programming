#include "main.h"

#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append to
 * @text_content: the content to append to the file
 *
 * Description: appends text at the enf of a file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, num_write;

	if (filename == NULL)
		return (-1);

	n = 0;
	while (text_content && text_content[n] != '\0')
		n++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (n > 0)
	{
		num_write = write(fd, text_content, n);
		if (num_write != n)
			return (-1);
	}

	close(fd);

	return (1);
}

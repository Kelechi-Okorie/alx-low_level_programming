#include "main.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of the file to append text
 * @text_content: text to append to @filename
 *
 * Description: appends @text_content to @filename
 * Return: 1 on success
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int s, t;

	s = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	while (text_content[s])
		s++;

	t = write(fd, text_content, s);
	if (t != s)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

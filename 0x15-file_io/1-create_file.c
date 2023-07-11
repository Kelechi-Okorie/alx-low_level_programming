#include "main.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of the textfile
 *
 * Description: creates a file called @filename
 * with content @text_content
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, s, t;

	s = 0;
	t = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[s] != '\0')
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

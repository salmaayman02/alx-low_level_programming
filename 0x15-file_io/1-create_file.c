#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - create
 * @filename: name of file
 * @text_content: text
 *
 * Return: (1) on success, (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL && text_content == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	else
	{
		len = 0;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

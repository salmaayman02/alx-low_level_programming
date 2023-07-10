#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - append
 * @filename: name of file
 * @text_content: text
 *
 * Return: (1) on success, (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

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

	o = open(filename, O_WRONLY | O_APPEND);
	if (o  == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}

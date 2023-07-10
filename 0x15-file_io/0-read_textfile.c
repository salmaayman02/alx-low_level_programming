#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - read
 * @filename: text file
 * @letters: number of letters
 *
 * Return: number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO., buf, t);

	free(buf);
	close(fd);
	return (w);
}

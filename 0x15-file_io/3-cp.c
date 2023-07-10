#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *creat_buffer(char *file);
void close_file (int fd);

/**
 * creat_buffer - creat
 * @file: file
 *
 * Return: char
 */

char *creat_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "can't write %s \n", file);
		exit(99);
	}
	return(buffer);
}

/**
 * close_file - close
 * @fd: file
 */

void close_file (int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "can't close %s \n", fd);
                exit(100);
	}
}

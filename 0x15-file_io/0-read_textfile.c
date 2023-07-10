#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

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
    int fd;
    ssize_t n_read, n_written;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (!buf) {
        close(fd);
        return (0);
    }

    n_read = read(fd, buf, letters);
    if (n_read == -1) {
        free(buf);
        close(fd);
        return (0);
    }

    n_written = write(STDOUT_FILENO, buf, n_read);
    free(buf);
    close(fd);

    if (n_written != n_read)
        return (0);

    return (n_written);
}

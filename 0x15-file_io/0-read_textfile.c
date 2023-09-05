#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters could read & print, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

nread = read(fd, buf, letters);
if (nread == -1)
{
free(buf);
close(fd);
return (0);
}

nwritten = write(STDOUT_FILENO, buf, nread);
if (nwritten == -1 || (size_t)nwritten != (size_t)nread)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (nwritten);
}

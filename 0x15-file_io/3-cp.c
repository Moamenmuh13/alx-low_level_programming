#include "main.h"

/**
 * close_files - Close two file descriptors.
 * @src_fd: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 */
void close_files(int src_fd, int dest_fd)
{
if (close(src_fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", src_fd);
exit(100);
}
if (close(dest_fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}
}

/**
 * main - Copy the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: 0 on success, appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
int src_fd, dest_fd;
ssize_t n;
char buffer[BUFFSIZE];

src_fd = open(argv[1], O_RDONLY);
if (src_fd == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dest_fd == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(src_fd);
exit(99);
}
while ((n = read(src_fd, buffer, BUFFSIZE)) > 0)
{
if (write(dest_fd, buffer, n) != n)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close_files(src_fd, dest_fd);
exit(99);
}
}
if (n == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close_files(src_fd, dest_fd);
exit(98);
}
close_files(src_fd, dest_fd);
return (0);


#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads text from a file ad writes to stdout
 * @filename: name of file to be read from
 * @letters: number of characcters to be read from file name
 * Return: returns count of char copied or ) if any error is encountered
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, written_bytes;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, letters);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[read_bytes] = '\0';
	written_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (read_bytes);
}


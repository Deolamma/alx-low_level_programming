#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * read_textfile - reads text from a file and prints to stdout
 * @filename: name of file of which text is to be printed from
 * @letters: number of bytes to be read from file
 * Return: Returns number of bytes read or Zero 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	/* number of bytes read */
	ssize_t nb_read;
	ssize_t nb_written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	nb_read = read(fd, buf, letters);
	if (nb_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	nb_written = write(STDOUT_FILENO, buf, nb_read);
	if (nb_written == -1 || nb_written != nb_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (nb_read);
}


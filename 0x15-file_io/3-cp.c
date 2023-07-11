#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * file_to_err_handler - handles error for file_to file
 * @file_name: third argument passed to CLI
 */
void file_to_err_handler(char *file_name)
{
	if (file_name != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
}
/**
 * file_from_err_handler - handles errors for the file_from file
 * @file_name: name of second  argument passed to CLI
 */
void file_from_err_handler(char *file_name)
{
	if (file_name != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(98);
	}
}
/**
 * fd_err_handler - handles errors for the file descriptors
 * @fd_value: value for the file descriptor
 */
void fd_err_handler(int fd_value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
	exit(100);
}
/**
 * cp - copy content from a file to another
 * @file_from: file to read content from
 * @file_to: file to write content to
 */
void cp(char *file_from, char *file_to)
{
	/* file descriptors for file_from and file_to */
	int fd_from, fd_to;
	char buff[BUFFSIZ];
	ssize_t nb_read = -1, nb_written;

	if (file_to == NULL || file_from == NULL)
		exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		file_to_err_handler(file_to);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		file_from_err_handler(file_from);
	while (nb_read > 0)
	{
		nb_read = read(fd_from, buff, BUFFSIZ);
		if (nb_read == -1 || nb_read != BUFFSIZ)
		{
			close(fd_from);
			if (close(fd_to) == -1)
				fd_err_handler(fd_to);
		}
		nb_written = write(fd_to, buff, nb_read);
		if (nb_written == -1 || nb_written != nb_read)
		{
			close(fd_to);
			if (close(fd_from) == -1)
				fd_err_handler(fd_from);
		}
	}
	close(fd_to);
	close(fd_from);
}


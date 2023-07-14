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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
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
 * main - passes the arguments from command line to cp fxn
 * @argc: count of arguments passed to the CLI
 * @argv: array of the elements passed to CLI
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to:\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
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
	ssize_t nb_read, nb_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		file_from_err_handler(file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		file_to_err_handler(file_to);
		if (close(fd_from) == -1)
			fd_err_handler(fd_from);
	}
	while ((nb_read = read(fd_from, buff, BUFFSIZ)) > 0)
	{
		if (nb_read == -1)
		{
			file_from_err_handler(file_from);
			close(fd_from);
			if (close(fd_to) == -1)
				fd_err_handler(fd_to);
		}
		nb_written = write(fd_to, buff, nb_read);
		if (nb_written != nb_read || nb_written == -1)
		{
			file_to_err_handler(file_to);
			close(fd_to);
			if (close(fd_from) == -1)
				fd_err_handler(fd_from);
		}
		BUFFSIZ += BUFFSIZ;
	}
	if (close(fd_to) == -1)
		fd_err_handler(fd_to);
	if (close(fd_from) == -1)
		fd_err_handler(fd_from);
}


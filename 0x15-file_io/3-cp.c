#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFSIZ 1024
#define PERMS 0664
#define ERR STDERR_FILENO
/**
 * error_file_frm - handles error for file to be read from
 * @filename: name of file to be read from
 * Return: Returns nothing
 */
void error_file_frm(const char *filename)
{
	dprintf(ERR, "Error: can't read from file %s\n", filename);
	exit(98);
}
/**
 * error_file_to - handles errors for file to be written to
 * @filename: File to be written to
 * Return: Nothing
 */
void error_file_to(const char *filename)
{
	dprintf(ERR, "can't write to %s\n", filename);
	exit(99);
}
/**
 * error_fdvalue - handles error for file descriptor
 * @fd_val: file descriptor value
 * Return: Nothing
 */
void error_fdvalue(int fd_val)
{
	dprintf(ERR, "Error: can't close fd %d\n", fd_val);
	exit(100);
}
/**
 * copy_file - copies content of file_from to file_to
 * @file_frm: file to be read from
 * @file_to: file to be written to
 * Return: Nothing
 */
void copy_file(const char *file_frm, const char *file_to)
{
	int fd_frm, fd_to, close_frm, close_to;
	char buf[BUFFSIZ];
	ssize_t writtn_bytes, read_bytes;

	if (file_frm == NULL || access(file_frm, R_OK) == -1)
		error_file_frm(file_frm);
	fd_frm = open(file_frm, O_RDONLY);
	if (fd_frm == -1)
		error_file_frm(file_frm);
	if (file_to == NULL)
		error_file_to(file_to);
	if (access(file_to, F_OK) == 0)
	{
		fd_to = open(file_to, O_WRONLY | O_TRUNC);
	} else
		fd_to = creat(file_to, PERMS);
	if (fd_to == -1)
		error_file_to(file_to);
	do {
		read_bytes = read(fd_frm, buf, BUFFSIZ);
		if (read_bytes == -1)
			error_file_frm(file_frm);
		writtn_bytes = write(fd_to, buf, read_bytes);
		if (writtn_bytes == -1)
			error_file_to(file_to);
	} while (read_bytes == BUFFSIZ);
	close_frm = close(fd_frm);
	if (close_frm == -1)
		error_fdvalue(fd_frm);
	close_to = close(fd_to);
	if (close_to == -1)
		error_fdvalue(fd_to);
}
/**
 * main - copies content of a file to another file
 * @argc: Count of arguments in argv array
 * @argv: array that stores command line arguments
 * Return: 0 Success or exit
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(ERR, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* call to function that performs file copy */
	copy_file(argv[1], argv[2]);
	return (0);
}


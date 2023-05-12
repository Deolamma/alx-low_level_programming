#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define APPND_PERMS 0664
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of file to be appended to
 * @text_content: Text data to be appended to the end of filename
 * Return: 1 Success or -1 Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	int count = 0;
	ssize_t appnd_bytes, txt_len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return ((access(filename, F_OK) == 0) ? 1 : (-1));
	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND, APPND_PERMS);
	} else
	{
		return (-1);
	}
	if (fd == -1)
		return (-1);
	if (access(filename, W_OK) == -1)
	{
		close(fd);
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		count++;
	txt_len = (ssize_t) count;
	appnd_bytes = write(fd, text_content, txt_len);
	if (appnd_bytes == -1 || appnd_bytes != txt_len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}


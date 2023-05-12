#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file with O_RDWR permissioner for owner only
 * @filename: name of file to be created
 * @text_content: content to be filled into the created file
 * Return: 1 Success, -1 Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int count = 0;
	ssize_t txt_content_len, written_bytes;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, PERMS);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			count++;
		txt_content_len = (ssize_t) count + 1;
		written_bytes = write(fd, text_content, txt_content_len);
		if (written_bytes != txt_content_len)
		{
			close(fd);
			return (-1);
		}
		write(fd, "\n", 1);
	}
	close(fd);
	return (1);
}


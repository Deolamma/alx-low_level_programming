#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written to file
 * Return: 1 on Success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, (text_content == NULL) ?
		  O_CREAT | O_TRUNC :
		  O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		if ((write(fd, text_content, i) == -1))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


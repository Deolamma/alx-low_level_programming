#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends a text to a file
 * @filename: name of file to be appended to
 * @text_content: text content to be appended to the file
 * Return: 1 on Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		if ((write(fd, text_content, i)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}




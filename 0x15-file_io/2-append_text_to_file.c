#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: content added
 *
 * Return: 1 if the file already exists. -1 if it doest exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	rwr = write(fd, text_content, len);

		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * create_file - creates a file with a text in it
 * @filename: name of file
 * @text_content: text to place inside file
 *
 * Return: 1 on success, -1 on false
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	length = write(fd, text_content, len);

	if (close(fd) == -1 || len != length)
		return (-1);
	return (1);
}

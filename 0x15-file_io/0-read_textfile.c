#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

/**
 * read_textfile - function that reads a text file and prints
 * 
 * @filename: represents the text file opened
 *
 * Return: return the number of letter that was read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rl, rw;
	char *monbuf = malloc(sizeof(char) * letters);
	if (!monbuf)
		return (0);

	if (filename == NULL)
	{
		free(monbuf);
		return (0);
        }

        fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		perror("Error openening file");
		free(monbuf);
		return (0);
        }

	rl = read(fd, monbuf, letters);
	if (rl < 0)
	{
		perror("Error readinf file");
		free(monbuf);
		close(fd);
		return (0);
        }

	rw = write(STDOUT_FILENO, monbuf, rl);
	if (rw < 0)
	{
		perror("Error writing to stdout");
		free(monbuf);
		close(fd);
		return (0);
        }

 	free(monbuf);
 	close(fd);
 	return (rw);
}

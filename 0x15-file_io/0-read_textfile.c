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
 * @letters: the number of letters to read and print
 *
 * Return: return the number of letter that was read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int length, wrotechars;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	length = read(file, buff, letters);
	if (length == -1)
	{
		free(buff);
		close(file);
		return (0);
	}

	wrotechars = write(STDOUT_FILENO, buff, length);

	free(buff);
	close(file);
	if (wrotechars != length)
		return (0);
	return (length);
}


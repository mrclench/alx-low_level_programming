#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>



void exit_with_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

int main(int ac, char *av[])
{
	int fd_from, fd_to, rd_stat, wr_stat;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error("Can't read from file", 98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error("Can't write to file", 99);
	}

	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(fd_from, buffer, BUFSIZE);
		if (rd_stat == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error("Can't read from file", 98);
		}

		if (rd_stat > 0)
		{
			wr_stat = write(fd_to, buffer, rd_stat);
			if (wr_stat != rd_stat || wr_stat == -1)
			{
				close(fd_from);
				close(fd_to);
				exit_with_error("Can't write to file", 99);
			}
		}
	}

	if (close(fd_from) == -1)
	{
		exit_with_error("Can't close fd", 100);
	}

	if (close(fd_to) == -1)
	{
		exit_with_error("Can't close fd", 100);
	}

	return 0;
}

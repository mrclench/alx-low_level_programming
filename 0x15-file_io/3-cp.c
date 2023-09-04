#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>

#define BUFSIZE 1024

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
        exit_with_error("Incorrect number of arguments", 97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit_with_error("Can't read from file", 98);
    }

    fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
    if (fd_to == -1)
    {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
        exit_with_error("Can't write to file", 99);
    }

    while ((rd_stat = read(fd_from, buffer, BUFSIZE)) > 0)
    {
        wr_stat = write(fd_to, buffer, rd_stat);
        if (wr_stat == -1 || wr_stat != rd_stat)
        {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
            exit_with_error("Can't write to file", 99);
        }
    }

    if (rd_stat == -1)
    {
        close(fd_from);
        close(fd_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit_with_error("Can't read from file", 98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit_with_error("Can't close fd", 100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit_with_error("Can't close fd", 100);
    }

    return 0;
}

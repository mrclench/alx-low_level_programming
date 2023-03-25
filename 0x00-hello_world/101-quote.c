#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *msg = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = sizeof(*msg);

	write(STDOUT_FILENO, msg, len - 1);

	return (1);
}

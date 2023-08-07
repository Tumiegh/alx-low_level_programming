#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads text file and prints it to standard output
 * letters - number of letters it should print
 * Return - numbers of letters it could read and print or return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	ssize_t x;
	ssize_t i;

	x = write(STDOUT_FILENO, buf, t);
	i = read(fd, buf, letters);
	free(buf);
	close(fd);
	return (w);
}

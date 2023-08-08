#include "main.h"
#include<stdlib.h>

/**
 * create_file - create file
 * filename - filename
 * Return - 1 Success, -1 Failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int dis;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, dis);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

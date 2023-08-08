#include "main.h"
#include<stdlib.h>

/**
 * append_text_to_file - appends text at files end
 * filename - filename
 * text_content - string to add at the end of the file
 * Return - 1 Succes, -1 Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, dis = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, dis);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}

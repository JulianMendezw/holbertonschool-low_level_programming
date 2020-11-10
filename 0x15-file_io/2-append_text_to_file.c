/*
 * File: 0-read_textfile.c
 * Auth: Julian Mendez w
 */

#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: file to read and write.
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: The actual number of letters it could read and print.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDONLY | O_APPEND);
		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			if (write(fd, text_content, i) < i)
				return (-1);
	}

	close(fd);
	return (1);
}

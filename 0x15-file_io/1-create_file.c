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
 * create_file - A function that creates a file.
 *
 * @filename: file to read and write.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);

	for (i = 0; text_content[i]; i++)
	;

	if (text_content == NULL)
		w = write(fd, text_content, 0);
	else
		w = write(fd, text_content, i);

		if (w == -1)
			return (-1);

	close(fd);
	return (1);
}

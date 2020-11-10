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
 * read_textfile - A function that reads a text file and prints it to
 *					the POSIX standard output.
 * @filename: file to read and write.
 * @letters: is the number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *file;
	ssize_t w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	file = calloc(letters, sizeof(char));
		if (!file)
			return (0);

	sz = read(fd, file, letters);
		if (sz == -1)
		{
			free(file);
			return (0);
		}

	w = write(STDOUT_FILENO, file, sz);

	close(fd);
	return (w);
}

/*
 * File: 3-cp.c
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

int copy_file(char *file_from, char *file_to);
/**
 * main - A function that copy.
 * @ac: file inception.
 * @av: file destiny.
 *
 * Return: Nothing.
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = copy_file(av[1], av[2]);

		if (res == 98)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		else if (res == 99)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

	return (0);
}

/**
 * copy_file - A function that copy to another.
 * @file_from: file inception.
 * @file_to: file destiny.
 *
 * Return: Exit code.
 */

int copy_file(char *file_from, char *file_to)
{
	int f_from, f_to, r, w, c;
	char *text_copy;

	if (!file_from)
		return (98);

	f_from = open(file_from, O_RDONLY);
		if (f_from == -1)
			return (98);

	text_copy = malloc(sizeof(char) * BUF);
		if (!text_copy)
			return (98);

	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

		if (f_to == -1)
		{
			free(text_copy);
			return (99);
		}

	r = read(f_from, text_copy, BUF);
		if (r == -1)
		{
			free(text_copy);
			return (98);
		}

	while (r != 0)
	{
		w = write(f_to, text_copy, r);
			if (w == -1 || w != r)
			{
				free(text_copy);
				return (99);
			}

		r = read(f_from, text_copy, BUF);
				if (r == -1)
				{
					free(text_copy);
					return (98);
				}
	}

	free(text_copy);

	c = close(f_from);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	if (close(f_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}

	exit(0);
}

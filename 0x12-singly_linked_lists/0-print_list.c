/*
 * File: 0-print_list.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 *@h: node to print.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;
	const list_t *temp = h;

	for (nodes = 0; temp != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
			temp = temp->next;
	}
	return (nodes);
}

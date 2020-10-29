/*
 * File: 0-print_list.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 *@h: nodo to print.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 1; nodes > 0; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		if (h->next != NULL)
			h = h->next;
		else
			break;
	}
	return (nodes);
}

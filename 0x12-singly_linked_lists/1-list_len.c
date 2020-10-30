/*
 * File: 1-list_len.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"


/**
 * list_len - A function that counts all the elements of a list_t list.
 *@h: node to count.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;
	const list_t *temp = h;

	for (nodes = 0; temp != NULL; nodes++)
	{
		temp = temp->next;
	}
	return (nodes);
}

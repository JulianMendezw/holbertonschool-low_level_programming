/*
 * File: 1-listint_len.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - A function that returns the number
 * 				of elements in a linked listint_t list.
 *@h: Head of node.
 *
 * Return: the number of nodes of the listint_t.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;
	const listint_t *temp = h;

	for (nodes = 0; temp != NULL; nodes++)
	{
		temp = temp->next;
	}
	return (nodes);
}

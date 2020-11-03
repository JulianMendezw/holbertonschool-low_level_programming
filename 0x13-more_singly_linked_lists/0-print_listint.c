/*
 * File: 0-print_listint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a list_t list.
 *@h: node to print.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;
	const listint_t *temp = h;

	for (nodes = 0; temp != NULL; nodes++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (nodes);
}

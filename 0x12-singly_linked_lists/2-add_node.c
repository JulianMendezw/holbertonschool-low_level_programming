/*
 * File: 2-add_node.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

int _strlen(const char *str);

/**
 * add_node - A function that adds a new node at
 *				the beginning of a list_t list.
 *@head: Node head.
 *@str: String to copy.
 * Return: A new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (!newn)
	{
		return (NULL);
	}
	newn->str = strdup(str);
	newn->len = _strlen(str);
	newn->next = (*head);
	(*head) = newn;

	return (newn);
}

/**
 * _strlen - A function that count a string.
 *@str: String to count.
 * Return: an integer.
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	;
	return (i);
}

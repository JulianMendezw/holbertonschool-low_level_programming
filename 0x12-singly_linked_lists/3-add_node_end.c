/*
 * File: 3-add_node_end.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - A function that adds a new node at
 *					the end of a list_t list.
 *@head: Node tail.
 *@str: String to copy.
 * Return: A new node at the end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn, tmp = *head;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = _strlen(str);
	newn->next = NULL;

	if (head == NULL)
		head = newn;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newn;

	return (newn);

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

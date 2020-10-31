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
	list_t *newn, *tmp = *head;
	int i;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	for (i = 0; str[i]; i++)
	;

	newn->str = strdup(str);
	newn->len = i;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		tmp  = *head;
		while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newn;
	}
	return (newn);
}

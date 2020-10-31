/*
 * File: 4-free_list.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 *@head: pointer to the first node.
 *
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

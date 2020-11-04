/*
 * File: 4-free_listint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -a function that frees a listint_t list.
 * @head: Node to free.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

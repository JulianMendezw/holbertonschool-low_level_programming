/*
 * File: 4-free_listint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include "lists.h"

/**
 * free_listint -a function that frees a listint_t list.
 * @head: Node to free.
 *
 * Return: nothing.
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

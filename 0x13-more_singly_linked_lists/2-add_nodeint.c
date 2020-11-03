/*
 * File: 2-add_nodeint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 *				at the beginning of a listint_t list.
 *@head: direction of the head.
 *@n: integer to add to the new node.
 *
 * Return: The address of the new element or NULL if it fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}

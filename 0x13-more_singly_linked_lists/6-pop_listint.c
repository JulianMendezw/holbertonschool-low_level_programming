/*
 * File: 6-pop_listint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a
 *				listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the first node.
 *
 * return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *firstNode;
	int n;

	firstNode = *head;
	n = firstNode->n;
	*head = (*head)->next;
	free(firstNode);

	return (n);
}

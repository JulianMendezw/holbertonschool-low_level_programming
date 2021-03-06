/*
 * File: 7-get_nodeint.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  A function that deletes the head node of a
 *		listint_t linked list, and returns the head node’s data (n).
 * @head: Pointer to the first node.
 * @index: Node to print.
 *
 * Return: The node indicated by index if the node does not exist return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	if (index == 0)
	{
		return (head);
	}

	for (i = 0; head; i++)
	{
		if (i == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
		}
	}

	return (0);
}

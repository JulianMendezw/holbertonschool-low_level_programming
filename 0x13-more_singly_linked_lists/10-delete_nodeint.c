/*
 * File: 10-delete_nodeint.c
 * Auth: Julian Mendez w
 */
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at
 *							index index of a listint_t linked list.
 * @head: Pointer to the first node.
 * @index: is the index of the list where the new node should be deleted.
 *
 * Return: The sum of data (n) nodes.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextn, *temp = *head;
	unsigned int i;

	if (index == 0)
	{
		if (temp)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		return (-1);
	}
	for (i = 1; i <= (index - 1); i++)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
	}

	nextn = temp->next;
	temp->next = nextn->next;
	free(nextn);
	return (1);
}

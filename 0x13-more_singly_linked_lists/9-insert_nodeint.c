/*
 * File: 9-insert_nodeint.c
 * Auth: Julian Mendez w
 */
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that returns the sum of all the data
 *				(n) of a listint_t linked list.
 * @head: Pointer to the first node.
 * @idx: is the index of the list where the new node should be added.
 * @n: data to set in a new node.
 *
 * Return: The sum of data (n) nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *temp = *head;
	unsigned int i;

	if (!temp)
		return(NULL);

	for (i = 0; temp ; i++)
	{
		if (i != idx)
			temp = temp->next;
		else
			{
				newn = malloc(sizeof(listint_t));
				if (!newn)
					return (NULL);
				newn->n = n;
				newn->next = temp->next;
				temp->next = newn;
			}
	}
	return (NULL);
}

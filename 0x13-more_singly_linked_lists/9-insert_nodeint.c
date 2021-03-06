/*
 * File: 9-insert_nodeint.c
 * Auth: Julian Mendez w
 */
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 *							at a given position.
 * @head: Pointer to the first node.
 * @idx: is the index of the list where the new node should be added.
 * @n: data to set in a new node.
 *
 * Return: The sum of data (n) nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *temp;
	unsigned int i;

	newn = malloc(sizeof(listint_t));

	if (newn == NULL || head == NULL)
		return (NULL);

	newn->n = n;
	temp = *head;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	for (i = 0; temp ; i++)
	{
		if (i != (idx - 1))
			temp = temp->next;
		else
			{
				newn->next = temp->next;
				temp->next = newn;
				return (newn);
			}
	}
	return (NULL);
}

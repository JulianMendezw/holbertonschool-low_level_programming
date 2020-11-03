/*
 * File: 3-add_nodeint_end.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint_end - A function that counts all the elements of a list_t list.
 *@head: pointer to node.
 *@n: Integer to set in the node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *temp;
	int nodes;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->next = NULL;
	if (*head == NULL)
		*head = newn;
	else
	{
		temp = *head;
		for (nodes = 0; temp->next != NULL; nodes++)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	return (newn);
}

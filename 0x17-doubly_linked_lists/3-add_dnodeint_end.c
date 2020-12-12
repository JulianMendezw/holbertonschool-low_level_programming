#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - A function that add a new node to the end list.
 *@head: Pointer to the first node.
 *@n: Data to set in a new node.
 * Return: A new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *tmp = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node,
		node->prev = NULL;

	else
	{
		while (tmp->next)
			tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;
	}
	return (node);
}

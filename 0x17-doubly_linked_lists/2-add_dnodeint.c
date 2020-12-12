#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - A function that add a new node to the beginning list.
 *@head: Pointer to the first node.
 *@n: Data to set in a new node.
 * Return: A new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (*head)
		(*head)->prev = node;

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;

	return (node);
}

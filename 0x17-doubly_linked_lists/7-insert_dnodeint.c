#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a
 * new node at a given position.
 *
 *@h: Pointer to the first node.
 *@idx:  is the index of the list where the new node should be added.
 *@n: Data to set to a new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *head = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(&head, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	for (; head; i++)
	{
		if (i != (idx - 1))
			head = head->next;
		else
		{
			head->next->prev = node;
			node->next = head->next;
			head->next = node;
			node->prev = head;
			return (node);
		}
	}
	return (NULL);
}

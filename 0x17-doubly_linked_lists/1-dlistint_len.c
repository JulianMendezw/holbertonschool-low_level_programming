#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - A function that count all the nodes of a dlist_t list.
 *@h: pointer to the first node.
 *
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
		h = h->next, n++;
	return (n);
}

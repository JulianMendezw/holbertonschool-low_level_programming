#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 *@head: Pointer to the first node.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head)
		current = head,
		head = head->next,
		free(current);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the n node of a linked list.
 *@head: Pointer to the first node.
 *@index: index of node.
 * Return: A node from de index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

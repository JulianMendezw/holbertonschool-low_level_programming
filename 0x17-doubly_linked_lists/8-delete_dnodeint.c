#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - A function that deletes the node at
 *							index index of adlistint_t linked list.
 * @head: Pointer to the first node.
 * @index: is the index of the list where the node should be deleted.
 *
 * Return: The sum of data (n) nodes.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *tmp = *head;
	unsigned int i = 0;

	if (tmp && index == 0)
	{
		*head = (*head)->next;

		if (tmp->next)
			tmp->next->prev = NULL;

		free(tmp);
		return (1);
	}

	while (tmp)
	{
		if (i != index)
			tmp = tmp->next, i++;
		else
		{
			current = tmp;
			tmp->prev->next = tmp->next;

			if (tmp->next)
				tmp->next->prev = tmp->prev;

			free(current);
			return (1);
		}
	}
	return (-1);
}

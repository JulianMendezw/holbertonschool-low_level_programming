/*
 * File: 8-sum_listint.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all the data
 *				(n) of a listint_t linked list.
 * @head: Pointer to the first node.
 *
 * Return: The sum of data (n) nodes.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

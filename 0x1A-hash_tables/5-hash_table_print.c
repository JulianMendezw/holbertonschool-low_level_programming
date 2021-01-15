#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table..
 * @ht: is the hash table you want to look into.
 *
 * Return:  1 if it succeeded, 0 otherwise.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int i = 0;

	hash_node_t *current_node;

	if (ht)
	{
		index = 0;
		putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			current_node = ht->array[index];
			while (current_node)
			{
				if (i > 0)
					printf(", ");

				printf("'%s': '%s'", current_node->key, current_node->value);
				i++;
				current_node = current_node->next;
			}
		}
			printf("}\n");
	}
}

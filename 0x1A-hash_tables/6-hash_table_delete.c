#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current_node;

	if (ht)
	{
		index = 0;
		for (index = 0; index < ht->size; index++)
		{
			while (ht->array[index])
			{
				current_node = ht->array[index];
				ht->array[index] = ht->array[index]->next;

				free(current_node->key);
				free(current_node->value);
				free(current_node);
			}
		}
		free(ht->array);
		free(ht);
	}
}

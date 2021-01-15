#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key:  is the key you are looking for.
 *
 * Return:  1 if it succeeded, 0 otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (!key || !ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		current_node = ht->array[index];
		while (current_node)
		{
			if (!strcmp(current_node->key, key))
				return (current_node->value);
			current_node = current_node->next;
		}
	}
	return (NULL);
}

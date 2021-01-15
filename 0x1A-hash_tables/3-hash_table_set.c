#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to key.
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return:  1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;
	hash_node_t *old_node;

	index = key_index(((const unsigned char *)key), ht->size);

	if (!key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = ((char *)key);
	new_node->value = ((char *)value);
	new_node->next = NULL;

	if (ht->array[index])
	{
		old_node = ht->array[index];
		new_node->next = old_node;
	}

	ht->array[index] = new_node;

	return (1);
}

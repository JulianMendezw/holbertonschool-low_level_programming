#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

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

	if (ht == NULL  || ht->array == NULL || key == NULL || value == NULL)
		return (0);

	if (ht->array[index])
	{
		old_node = ht->array[index];
		while (old_node)
		{
			if (!(strcmp(old_node->key, key)))
			{
				free(old_node->value);
				old_node->value = strdup(value);
				return (1);
			}
			old_node = old_node->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!new_node->key || !new_node->value)
	{
		if (!new_node->key)
			return (0);
		free(new_node->key);
			return (0);
	}

	if (ht->array[index])
		new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}

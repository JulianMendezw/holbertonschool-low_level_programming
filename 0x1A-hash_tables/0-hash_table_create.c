#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array.
 *
 *  Return: New hash table on succes or NULL if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;

	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}

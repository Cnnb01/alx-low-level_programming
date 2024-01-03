#include "hash_tables.h"
/*
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_node_t));
	table->size = size;
	table->array = calloc(table->size,(sizeof(hash_node_t*)));
	for(i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

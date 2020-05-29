#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **hash_array;
	hash_table_t *hash_table;
	unsigned long int i = 0;

	hash_array = malloc(sizeof(hash_node_t *) * size);

	if (hash_array == NULL)
		return (NULL);

	while (i < size)
	{
		hash_array[i] = NULL;
		i++;
	}

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		free(hash_array);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = hash_array;

	return (hash_table);
}

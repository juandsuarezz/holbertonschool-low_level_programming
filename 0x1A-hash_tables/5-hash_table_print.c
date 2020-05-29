#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	int mult = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (mult == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				mult = 1;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: key string
 * Return: value element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	if (key[0] == '\0' || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	node = ht->array[i];
	if (node == NULL)
		return (NULL);
/*Check if there is a linked list entry*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

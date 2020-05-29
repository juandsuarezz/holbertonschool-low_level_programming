#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key (a string)
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *temp;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[i] != NULL)
		new->next = ht->array[i];
	else
		new->next = NULL;

	ht->array[i] = new;
	return (1);
}

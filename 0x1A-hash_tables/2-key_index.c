#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key (a string) to input
 * @size: size of the array of the hash table
 * Return: index at which the key/value is
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

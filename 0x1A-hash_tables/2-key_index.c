#include "hash_tables.h"
/**
 * key_index - calculates an index or key where a value can be stored
 * @key: key to be used to get index on hash table or array
 * @size: This is the size of the hash table or array
 * Return: Returns an index or key where data can be stored on the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key)
		index = hash_djb2(key);
	if (size > 0)
		index = index % size;

	return (index);
}

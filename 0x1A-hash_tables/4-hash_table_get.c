#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Hash table to retrieve value based on key
 * @key: this is the key to retrieve value from
 * Return: returns the value at a given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || strlen(key) == 0 || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}


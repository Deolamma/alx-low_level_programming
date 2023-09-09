#include "hash_tables.h"
/**
 * hash_table_set - we set or update the key/value of hash table
 * @ht: This is the hash table we want to add or update its key/value
 * @key: This is the key which will be mapped to a value
 * @value: This is the value associated with a key
 * Return: returns 1 on Success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *existing_node;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0 || !value || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	existing_node = ht->array[index];
	/* if node exists change value */
	while (existing_node)
	{
		if (strcmp(existing_node->key, key) == 0)
		{
			free(existing_node->value);
			existing_node->value = strdup(value);
			if (!existing_node->value)
				return (0);
			return (1);
		}
		existing_node = existing_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* on first call ht->array[index] == NULL */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

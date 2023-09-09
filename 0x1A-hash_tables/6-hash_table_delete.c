#include "hash_tables.h"
/**
 * hash_table_delete - Deletes all data in an hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (!node)
				continue;
			while (node)
			{
				temp = node;
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_print - prints the content of a hash table
 * @ht: hash table to worked upon
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int counter = 0;
	hash_node_t *node;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'",
					node->key, node->value);
				node = node->next;
				counter++;
			}
		}
		printf("}\n");
	}
}

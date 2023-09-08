#include "hash_tables.h"
/**
 * hash_table_create - Creates an hash table
 * @size: size of the hash table to be created / size of array
 * Return: Returns a pointer to the created hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	/* Allocate memory for hash table struct */
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	if (size == 0)
		return (NULL);
	/* allocate memory for the array */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash_table->array))
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	/* set each slot in the array(hash_node) to NULL */
	/* Indicates that node is not filled yet */
	while (i < hash_table->size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}

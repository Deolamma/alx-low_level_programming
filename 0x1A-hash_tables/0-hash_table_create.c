#include "hash_tables.h"
/**
 * hash_table_create - Creates an hash table of size @size
 * @size: size of the hash table to be created / size of array
 * Return: Returns a pointer to the created hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t *) * size);
	if (!hash_table)
		return (NULL);
	return (hash_table);
}

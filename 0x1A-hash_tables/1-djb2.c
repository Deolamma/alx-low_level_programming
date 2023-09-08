#include "hash_tables.h"
/**
 * hash_djb2 - hash function that helps us create unique indexes
 * @str: This is the key
 * Return: This returns an unsigned long int value rep. the index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		/* can also be rep. with: hash = hash * 33 + c */
		/* This results in a lot of collisions */
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

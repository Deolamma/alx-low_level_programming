#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _memcpy - copies content from one memory block to another
 * @dest: Memory to receive data from another block of memory
 * @src: Memory location of which data is copied from to src
 * @size: size in bytes of memory to be copied
 * Return: Nothing
 */
void _memcpy(void *dest, void *src, unsigned int size)
{
	char *dest_ptr;
	char *src_ptr;
	unsigned int i;

	if (dest == NULL || src == NULL)
		return;
	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	for (i = 0; i < size; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
}
/**
 * _realloc - reallocates memory
 * @ptr: initial memmory allocated to data
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new memory location
 * Return: pointer to a function
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_ptr != NULL)
	{
		_memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
			free(ptr);
	}
	return (new_ptr);
}


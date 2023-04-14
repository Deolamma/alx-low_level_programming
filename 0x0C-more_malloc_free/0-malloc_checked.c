#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a block of memory using malloc
 *
 * @b: vatiable to be allocated memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

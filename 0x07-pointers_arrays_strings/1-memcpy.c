#include "main.h"
#include <stddef.h>
/**
 * _memcpy - Copies the content from a src to dest. address
 *
 * @src: Src address of which content will be copied from
 * @dest: destination address of which content willbe copied into
 * @n: number of bytes to be copied into dest.
 *
 * Return: Returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 * _memset - Prints the first n bytes
 * of the const. char b to dest.
 *
 * @s: pointer to the dest. address
 * @b: const char to be copied to the address
 * @n: number of bytes to copied
 *
 * Return: Returns the char b, n bytes number of times
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}


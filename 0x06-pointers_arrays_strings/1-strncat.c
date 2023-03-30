#include "main.h"
#include <string.h>
/**
 * _strncat - cocatenates two strings
 *
 * @dest: This is the string that would be appended to
 * @src: This is the string that'll be appended from
 * @n: This is the number of bytes of char we want to be appended,
 * to the destination
 *
 * Return: This returns the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}


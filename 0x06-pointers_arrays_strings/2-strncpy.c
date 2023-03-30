#include "main.h"
#include <string.h>
/**
 * _strncpy - this copies a string from a src to dest including
 * EOF
 *
 * @dest: This is the destination and creates a buffer to accommodate
 * the src string
 *
 * @src: This is the string to be copied into destination
 *
 * @n: Number of bytes we want copied into destination
 *
 * Return: Returns destination string and copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}


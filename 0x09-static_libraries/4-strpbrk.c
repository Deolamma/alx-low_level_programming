#include "main.h"
#include <string.h>
/**
 * _strpbrk - This locates the first occurence in s of any of the bytes
 * in accept
 *
 * @s: char array to scan through
 * @accept: char array to be used to find first match in s
 *
 * Return: Returns the remaining chars in char array after match
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}


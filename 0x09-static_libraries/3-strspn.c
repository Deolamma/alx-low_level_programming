#include "main.h"
#include <string.h>
/**
 * _strspn - scans through a char array, stops when it finds a match
 *
 * @s: char array to be scanned through
 * @accept: char array to be found in s
 *
 * Return: An unsigned int of the position where it found the last match
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}


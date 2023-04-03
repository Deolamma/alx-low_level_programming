#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurrence of a substring from a char array
 *
 * @haystack: char array to be traversed for the substring
 * @needle: char array to be found in haystack
 *
 * Return: Returns the pointer to the beginning of the matched substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}


#include "main.h"
#include <string.h>
/**
 * _strchr - prints out the remainder of a string, when it hits
 * a certain character
 *
 * @s: pointer to a char array
 * @c: char that we look for in s
 *
 * Return: Returns NULL if c is not found ELSE
 * returns the remainder of s including c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

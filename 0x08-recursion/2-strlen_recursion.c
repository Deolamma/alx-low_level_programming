#include "main.h"
#include <stddef.h>
/**
 * _strlen_recursion - counts the length of a char array
 * @s: char array to be looped through recursively
 * Return: length of char array
 */
int _strlen_recursion(char *s)
{
	if (s == NULL)
		return (-1);
	if (*s == '\0')
	{
		return (0);
	}
	return ((1 + _strlen_recursion(s + 1)));
}


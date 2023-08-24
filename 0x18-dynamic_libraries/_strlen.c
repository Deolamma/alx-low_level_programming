#include "main.h"

/**
 * _strlen - Function that calculates the length of a string
 * @s: the string whose length is to be gotten
 * Return: count on success 1 otherwise
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

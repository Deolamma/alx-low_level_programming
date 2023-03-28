#include "main.h"
/**
 * print_rev - prints reverse of a string
 *
 * @s: string to be passed intp fxn
 *
 * Return: Returns void(Always an int)
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}


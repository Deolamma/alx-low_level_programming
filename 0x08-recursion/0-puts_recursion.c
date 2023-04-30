#include "main.h"
#include <stddef.h>
/**
 * _puts_recursion - mimics how the puts fxn works
 * @s: char array to be looped through recursively
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (s == NULL)
		return;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}


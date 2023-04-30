#include "main.h"
#include <stddef.h>
/**
 * _print_rev_recursion - prints a char array in reverse
 * @s: char array to be reversed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL)
		return;
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

